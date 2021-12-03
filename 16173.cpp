#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

// 16173 점프왕 쩰리 (Small) - 구현, 그래프 이론, 그래프 탐색, 브루트포스 알고리즘, 너비 우선 탐색, 깊이 우선 탐색

int N;
int v[4][4];
int d[2][2]={{0,1},{1,0}};
queue<pii> q;

bool bfs(int x, int y){
    q.push(mp(x,y));
    while(!q.empty()){
        int x=q.front().first; int y=q.front().second; int dis=v[x][y];
        q.pop();
        for(int i=0;i<2;++i){
            int nx=x+(d[i][0]*dis);
            int ny=y+(d[i][1]*dis);
            if(nx<0 or nx>=N or ny<0 or ny>=N) continue;
            if(v[nx][ny]==-1) return true;
            else if(v[nx][ny]==0) return false;
            else q.push(mp(nx,ny));
        }
    }
    return false;
}

int main(void){
    fast;
    cin>>N;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            cin>>v[i][j];
        }
    }
    if(bfs(0,0)) cout<<"HaruHaru";
    else cout<<"Hing";
}
