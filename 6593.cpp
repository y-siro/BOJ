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

struct idx{
    int x,y,z;
};

const int MAX = 31;
int L,R,C;
int el,er,ec;
vs A[MAX];
int check[MAX][MAX][MAX];
int d[6][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};
queue<idx> q;

void bfs(){
    while(!q.empty()){
        int xx=q.front().x, yy=q.front().y, zz=q.front().z;
        q.pop();
        for(int i=0;i<6;++i){
            int nx=xx+d[i][0], ny=yy+d[i][1], nz=zz+d[i][2];
            if(nx<0 or ny<0 or nz<0 or nx>=L or ny>=R or nz>=C) continue;
            if(check[nx][ny][nz]>=0 or A[nx][ny][nz]=='#') continue;
            q.push({nx,ny,nz});
            check[nx][ny][nz]=check[xx][yy][zz]+1;
        }
    }
    if(check[el][er][ec]==-1) cout<<"Trapped!"<<"\n";
    else cout<<"Escaped in "<<check[el][er][ec]<<" minute(s)."<<"\n";
}


int main(void){
    fast;
    while(true){
        cin>>L>>R>>C;
        if(!L and !R and !C) return 0;
        for(int i=0;i<L;++i){
            for(int j=0;j<R;++j){
                string s; cin>>s;
                A[i].pb(s);
            }
        }
        for(int i=0;i<L;++i){
            for(int j=0;j<R;++j){
                for(int k=0;k<C;++k){
                    check[i][j][k]=-1;
                    if(A[i][j][k]=='S') {
                        q.push({i,j,k});
                        check[i][j][k]=0;
                    }
                    if(A[i][j][k]=='E'){
                        el=i; er=j; ec=k;
                    }
                }
            }
        }
        bfs();

        for(int i=0;i<MAX;++i) A[i].clear();
        memset(check,-1,sizeof(check));
    }
}
