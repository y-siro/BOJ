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

// 1926 그림

int n, m, mv=0, cnt=0, area_cnt=1;
int v[505][505];
bool visited[505][505];
int d[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x, int y){
    visited[x][y]=true;
    for(int i=0;i<4;++i){
        int nx=x+d[i][0], ny=y+d[i][1];
        if(nx<0 or nx>=n or ny<0 or ny>=m) continue;
        if(!visited[nx][ny] and v[nx][ny]) {
            visited[nx][ny]=true;
            area_cnt++;
            dfs(nx,ny);
        }
    }
}

int main(){
    fast;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(!visited[i][j] and v[i][j]) {
                cnt++;
                dfs(i,j);
                mv=max(mv,area_cnt);
                area_cnt=1;
            }
        }
    }
    cout<<cnt<<"\n"<<mv;
}
