#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1707 이분 그래프 - BFS

int K,V,E,col=-1;
vector<int> v[22222];
int visited[22222];
queue<int> q;

void bfs(int x){
    visited[x]=col;
    q.push(x);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        if(visited[x]==-1) col=1;
        else col=-1;
        for(int i=0;i<v[x].size();++i){
            int nx=v[x][i];
            if(visited[nx]==0){
                visited[nx]=col;
                q.push(nx);
            }
        }
    }
}

bool isBiGraph(){
    for(int i=1;i<=V;++i){
        for(int j=0;j<v[i].size();++j){
            int nx=v[i][j];
            if(visited[i]==visited[nx]) return 0;
        }
    }
    return 1;
}

int main(void){
    fast;
    cin>>K;
    while(K--){
        memset(visited,0,sizeof(visited));
        for(int i=0;i<22222;++i) v[i].clear();

        cin>>V>>E;
        for(int i=0;i<E;++i){
            int s,e; cin>>s>>e;
            v[s].push_back(e); v[e].push_back(s);
        }
        for(int i=1;i<=V;++i){
            if(!visited[i]) bfs(i);
        }
        if(isBiGraph()) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
