#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>

int N,M;
vector<string> A;
bool visited[22][22];
int d[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
int B[22][22];

int bfs(int x1, int y1, int x2, int y2){
    memset(B,0,sizeof(visited));
    memset(visited,false,sizeof(visited));
    queue<pii> q;
    q.push({x1,y1});
    visited[x1][y1]=true;
    B[x1][y1]=0;
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<4;++i){
            int nx=cur.first+d[i][0], ny=cur.second+d[i][1];
            if(nx<0 or ny<0 or nx>=N or ny>=M) continue;
            if(visited[nx][ny]) continue;
            visited[nx][ny]=true;
            q.push({nx,ny});
            B[nx][ny]=B[cur.first][cur.second]+1;
        }
    }
    memset(visited,false,sizeof(visited));
    q.push({x2,y2});
    visited[x2][y2]=true;
    B[x2][y2]=0;
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<4;++i){
            int nx=cur.first+d[i][0], ny=cur.second+d[i][1];
            if(nx<0 or ny<0 or nx>=N or ny>=M) continue;
            if(visited[nx][ny]) continue;
            visited[nx][ny]=true;
            q.push({nx,ny});
            B[nx][ny]=min(B[nx][ny], B[cur.first][cur.second]+1);
        }
    }
    int ret=0;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(A[i][j]=='1') ret=max(ret, B[i][j]);
        }
    }
    return ret;
}



int main(void){
    fast;
    cin>>N>>M;
    A.resize(N);
    for(int i=0;i<N;++i) cin>>A[i];
    int ans=1e9;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            for(int k=i;k<N;++k){
                for(int l=j;l<M;++l){
                    if(i==k and j==l) continue;
                    if(A[i][j]=='1' or A[k][l]=='1') continue;
                    ans=min(ans,bfs(i,j,k,l));
                }
            }
        }
    }
    cout<<ans;
}
