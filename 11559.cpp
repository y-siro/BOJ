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

int cnt=0, bob=0; bool flag;
vs A(12);
queue<pii> q;
bool visited[12][6];
int d[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

void reset(void){
    for(int i=10;i>=0;--i){
        for(int j=0;j<6;++j){
            int s=i;
            while(s<11){
                if(A[s+1][j]=='.' and A[s][j]!='.') {
                    swap(A[s+1][j],A[s][j]);
                    s++;
                }
                else break;
            }
        }
    }
}

void bfs(int x, int y, char c){
    visited[x][y]=true;
    q.push({x,y});
    vector<pii> bb;
    bb.pb({x,y});
    while(!q.empty()){
        int x=q.front().first, y=q.front().second;
        q.pop();
        for(int i=0;i<4;++i){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(nx<0 or nx>=12 or ny<0 or ny>=6) continue;
            if(visited[nx][ny] or A[nx][ny]!=c) continue;
            visited[nx][ny]=true;
            bb.pb({nx,ny});
            q.push({nx,ny});
        }
    }
    if(bb.size()>=4){
        bob++;
        for(int i=0;i<bb.size();++i){
            A[bb[i].first][bb[i].second]='.';
        }
    }
    bb.clear();
}

int main(void){
    fast;
    for(int i=0;i<12;++i) cin>>A[i];

    while(true){
        flag=false; bob=0;
        memset(visited,false,sizeof(visited));
        reset();
        for(int i=0;i<12;++i){
            for(int j=0;j<6;++j){
                if(A[i][j]!='.') flag=true;
            }
        }
        if(flag){
            for(int i=0;i<12;++i){
                for(int j=0;j<6;++j){
                    if(A[i][j]!='.') bfs(i,j,A[i][j]);
                }
            }
        }
        else {
            //cout<<"case b"<<"\n";
            break;
        }
        if(!bob) {
            //cout<<"case no_bomb"<<"\n";
            break;
        }
        else cnt++;

    }
    cout<<cnt;
}
