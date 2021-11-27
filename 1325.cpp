#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1325 효율적인 해킹

int N,M,cnt,mv=-1e9,d[11111];
bool visited[11111];
vector<int> v[11111];
queue<int> q;

int bfs(int x){
    cnt=0;
    visited[x]=true;
    q.push(x);
    while(!q.empty()){
        int x=q.front(); q.pop();
        for(int i=0;i<v[x].size();++i){
            int nx=v[x][i];
            if(!visited[nx]){
                visited[nx]=true;
                q.push(nx);
            }
        }
    }
    for(int i=1;i<=N;++i){
        if(visited[i]) cnt++;
    }
    return cnt;
}

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<M;++i){
        int a,b; cin>>a>>b;
        v[b].push_back(a);
    }
    for(int i=1;i<=N;++i){
        memset(visited,false,sizeof(visited));
        d[i]=bfs(i);
    }
    for(int i=1;i<=N;++i){
        mv=max(mv,d[i]);
    }
    for(int i=1;i<=N;++i){
        if(d[i]==mv) cout<<i<<" ";
    }
}
