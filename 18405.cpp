#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue<int>
#define pql priority_queue<int, vector<int>, greater<> >
#define pii pair<int,int>
#define pll pair<ll,ll>

int N,K,S,X,Y;

int d[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
int A[202][202], B[202][202];

void bfs(int x, int y){
    queue<pii> q;
    q.push({x,y});

    while(!q.empty()){
        auto cur=q.front(); q.pop();
        int x=cur.first, y=cur.second;
        for(int i=0;i<4;++i){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(nx<0 or ny<0 or nx>=N or ny>=N) continue;
            if(A[nx][ny]==A[x][y]) continue;
            if(A[nx][ny]==0){
                A[nx][ny]=A[x][y];
                B[nx][ny]=B[x][y]+1;
                q.push({nx,ny});
            }
            else if(A[nx][ny]>A[x][y]){
                if(B[nx][ny]>=B[x][y]+1){
                    A[nx][ny]=A[x][y];
                    B[nx][ny]=B[x][y]+1;
                    q.push({nx,ny});
                }
            }
            else if(A[nx][ny]<A[x][y]){
                if(B[nx][ny]>B[x][y]+1){
                    A[nx][ny]=A[x][y];
                    B[nx][ny]=B[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
    }
}


int main(void){
    fast;
    cin>>N>>K;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            B[i][j]=1e9;
        }
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            cin>>A[i][j];
            if(A[i][j]) B[i][j]=0;
        }
    }
    cin>>S>>X>>Y;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            if(A[i][j] and !B[i][j]){
                bfs(i,j);
            }
        }
    }

    if(B[X-1][Y-1]<=S) cout<<A[X-1][Y-1];
    else cout<<0;
}
