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

int R,C,ans=0;
vs A;
int d[3][2]={{-1,1},{0,1},{1,1}};
bool flag,visited[10101][505];

void dfs(int x, int y){
    visited[x][y]=true;
    if(y==C-1){
        flag=true;ans++; return;
    }
    for(int i=0;i<3;++i){
        int nx=x+d[i][0], ny=y+d[i][1];
        if(nx<0 or nx>=R or ny<0 or ny>=C) continue;
        if(!visited[nx][ny] and A[nx][ny]!='x') {
            dfs(nx,ny);
            if(flag) return;
        }
    }
}

int main(void){
    fast;
    cin>>R>>C;
    A.resize(R);
    for(int i=0;i<R;++i) cin>>A[i];
    for(int i=0;i<R;++i){
        flag=false;
        dfs(i,0);
    }
    cout<<ans;
}
