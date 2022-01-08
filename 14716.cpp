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

int M,N,cnt=0;
int A[252][252];
int B[252][252];
bool visited[252][252];
int d[8][2]={{1,0},{-1,0},{0,1},{0,-1},{-1,1},{1,1},{1,-1},{-1,-1}};

bool check(int x, int y){
    for(int i=0;i<8;++i){
        int nx=x+d[i][0], ny=y+d[i][1];
        if(A[nx][ny]) return true;
    }
    return false;
}

void bfs(int x, int y){
    queue<pii> q;
    q.push({x,y});
    visited[x][y]=true;
    while(!q.empty()){
        int x=q.front().first, y=q.front().second;
        q.pop();
        for(int i=0;i<8;++i){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(nx<0 or ny<0 or nx>=M or ny>=N) continue;
            if(visited[nx][ny] or !A[nx][ny]) continue;
            q.push({nx,ny});
            visited[nx][ny]=true;
        }
    }
}


int main(void){
    fast;
    cin>>M>>N;
    for(int i=0;i<M;++i){
        for(int j=0;j<N;++j){
            cin>>A[i][j];
        }
    }

    for(int i=0;i<M;++i){
        for(int j=0;j<N;++j){
            if(A[i][j] and !visited[i][j]) {
                    bfs(i,j); cnt++;
            }
        }
    }
    cout<<cnt;
}
