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
#define F first
#define S second

// 18352 특정 거리의 도시 찾기 - BFS

int N,M,K,X;
vector<int> v[333333],ans;
bool visited[333333];
queue<pii> q;

void bfs(int x, int dep){
    q.push(mp(x,dep));
    visited[x]=true;
    while(!q.empty()){
        int x=q.front().F; int dep=q.front().S;
        q.pop();
        if(dep==K) ans.pb(x);
        for(int i=0;i<v[x].size();++i){
            int nx=v[x][i];
            if(!visited[nx]){
                visited[nx]=true;
                q.push(mp(nx,dep+1));
            }
        }
    }
}


int main(void){
    fast;
    cin>>N>>M>>K>>X;
    for(int i=0;i<M;++i){
        int a,b; cin>>a>>b;
        v[a].pb(b);
    }
    bfs(X,0);

    if(!ans.size()) cout<<-1;
    else{
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();++i) cout<<ans[i]<<"\n";
    }
}
