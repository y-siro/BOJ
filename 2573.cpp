#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define vc vector
#define vi vector<int>
#define vl vector<ll>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
typedef long long int ll;

// 2573 빙산 - DFS

int N,M,cnt=0,year=0;
int m[333][333];
bool visited[333][333],check[333][333]; // 각각 melt, dfs 확인
int d[4][2]={{0,1},{0,-1},{-1,0},{1,0}};

void melt(int x, int y){
    visited[x][y]=true;
    for(int i=0;i<4;++i){
        int nx=x+d[i][0]; int ny=y+d[i][1];
        if(nx<0 or nx>=N or ny<0 or ny>=M) continue;
        if(m[nx][ny]<=0 and visited[nx][ny]) continue;
        if(m[nx][ny]>=1){
            m[nx][ny]--;
            if(m[nx][ny]<=0) visited[nx][ny]=true;
            continue;
        }
        melt(nx,ny);
    }
}

void dfs(int x, int y){
    //visited[x][y]=true;
    check[x][y]=true;
    for(int i=0;i<4;++i){
        int nx=x+d[i][0]; int ny=y+d[i][1];
        if(nx<0 or nx>=N or ny<0 or ny>=M or check[nx][ny] or m[nx][ny]<=0) continue;
        dfs(nx,ny);
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
    for(int year=1;year<=1111;++year, cnt=0) {
        memset(visited,false,sizeof(visited));
        memset(check,false,sizeof(check));
        for(int i=0;i<N;++i){
            for(int j=0;j<M;++j){
                if(m[i][j]<=0 and !visited[i][j]) melt(i,j);
            }
        }
        for(int i=0;i<N;++i){
            for(int j=0;j<M;++j){
                if(m[i][j]>0 and !check[i][j]) {
                    dfs(i,j); cnt++;
                    if(cnt>1) {
                        cout<<year; return 0;
                    }
                }
            }
        }
    }
    cout<<0;
}
