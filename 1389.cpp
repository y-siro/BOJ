#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1389 케빈 베이컨의 6단계 법칙

int N,M,m_c=1e9,idx=0;
vector<int> v[111];
queue<int> q;
int ms[111][111];
bool visited[111];
void bfs(int num){
    memset(visited,false,sizeof(visited));
    q.push(num);
    visited[num]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0;i<v[x].size();++i){
            int nx=v[x][i];
            if(!visited[nx]){
                visited[nx]=true;
                q.push(nx);
                ms[nx][num]=ms[x][num]+1;
                ms[num][nx]=ms[num][x]+1;
            }
        }
    }
}

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<M;++i){
        int a, b; cin>>a>>b;
        v[a].push_back(b); v[b].push_back(a);
    }
    memset(ms,0,sizeof(ms));
    for(int i=1;i<=N;++i) bfs(i);
    for(int i=1;i<=N;++i){
        int sum=0;
        for(int j=1;j<=N;++j) sum+=ms[i][j];
        if(m_c>sum){
            m_c=min(m_c,sum);
            idx=i;
        }
    }
    cout<<idx;
}
