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

int N,M,mv=0,ans=0;
int m[55][55];
int check[55][55];
bool visited[55][55];
int d[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
queue<pii> q;

void bfs(int x, int y, int ini){
    memset(visited,false,sizeof(visited));
    memset(check,0,sizeof(check));
    visited[x][y]=true;
    q.push({x,y});
    while(!q.empty()){
        int x=q.front().first, y=q.front().second;
        q.pop();
        for(int i=0;i<4;++i){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(nx<0 or nx>=N or ny<0 or ny>=M) continue;
            if(!visited[nx][ny] and m[nx][ny]>0){
                check[nx][ny]=check[x][y]+1;
                visited[nx][ny]=true;
                q.push({nx,ny});
            }
        }
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(mv<check[i][j]){
                mv=max(mv,check[i][j]);
                ans=ini+m[i][j];
            }
            else if(mv==check[i][j]){
                ans=max(ans,ini+m[i][j]);
            }
        }
    }
}

int main(void){
    fast;
    cin>>N>>M;

    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin>>m[i][j];
        }
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(m[i][j]) bfs(i,j,m[i][j]);
        }
    }
    cout<<ans;
}
