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

int N,mv=0;
int d[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
int m[505][505];
int dp[505][505];

int dfs(int x, int y){
    if(dp[x][y]) return dp[x][y];
    // visit check
    dp[x][y]=1;
    for(int i=0;i<4;++i){
        int nx=x+d[i][0], ny=y+d[i][1];
        if(nx<0 or nx>=N or ny<0 or ny>=N) continue;
        if(m[nx][ny]>m[x][y]){
            dp[x][y]=max(dp[x][y],dfs(nx,ny)+1);
        }
    }
    return dp[x][y];
}

int main(void){
    fast;
    cin>>N;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            cin>>m[i][j];
        }
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            mv=max(mv,dfs(i,j));
        }
    }
    cout<<mv;
}
