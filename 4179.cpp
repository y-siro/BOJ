#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>

const int MAX=1001;
int R,C;
int d[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
vs A;
int check_fire[MAX][MAX];
int check[MAX][MAX];
queue<pii> jh;
queue<pii> fire;

void bfs(){
    while(!fire.empty()){
        int x=fire.front().first, y=fire.front().second;
        fire.pop();
        for(int i=0;i<4;++i){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(nx<0 or ny<0 or nx>=R or ny>=C) continue;
            if(check_fire[nx][ny]>=0 or A[nx][ny]=='#') continue;
            check_fire[nx][ny]=check_fire[x][y]+1;
            fire.push({nx,ny});
        }
    }
    while(!jh.empty()){
        int x=jh.front().first, y=jh.front().second;
        jh.pop();
        for(int i=0;i<4;++i){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(nx<0 or ny<0 or nx>=R or ny>=C) {
                cout<<check[x][y]+1; exit(0);
            }
            if(check[nx][ny]>=0 or A[nx][ny]=='#') continue;
            if(check_fire[nx][ny]!=-1 and check_fire[nx][ny]<=check[x][y]+1) continue;
            check[nx][ny]=check[x][y]+1;
            jh.push({nx,ny});
        }
    }
}

int main(void){
    fast;
    memset(check_fire,0,sizeof(check_fire));
    memset(check,0,sizeof(check));
    cin>>R>>C;
    for(int i=0;i<R;++i){
        string s; cin>>s;
        A.pb(s);
    }



    for(int i=0;i<R;++i){
        for(int j=0;j<C;++j){
            check[i][j]=check_fire[i][j]=-1;
            if(A[i][j]=='J') {
                jh.push({i,j});
                check[i][j]=0;
            }
            else if(A[i][j]=='F') {
                fire.push({i,j});
                check_fire[i][j]=0;
            }
        }
    }
    bfs();
    cout<<"IMPOSSIBLE";
}
