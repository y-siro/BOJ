#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue<int>
#define pql priority_queue<int, vector<int>, greater<> >
#define pii pair<int,int>
#define pll pair<ll,ll>

vector<int> A[505];
int par[505];
bool visited[505];
int cnt=0;

bool dfs(int cur, int pidx){
    visited[cur]=true;
    for(int i=0;i<A[cur].size();++i){
        int nxt=A[cur][i];
        if(nxt==pidx) continue;
        if(visited[nxt]) return false;
        if(!dfs(nxt,cur)) return false;
    }
    return true;
}

int main(void){
    fast;
    int t=1;
    while(true){
        int N,M; cin>>N>>M; if(N==0 and M==0) return 0;
        while(M--){
            int a,b; cin>>a>>b;
            A[a].push_back(b); A[b].push_back(a);
        }
        cnt=0;
        for(int i=1;i<=N;++i){
            if(!visited[i] and dfs(i,0)) cnt++;
        }
        if(cnt>1) cout<<"Case "<<t++<<": A forest of "<<cnt<<" trees.\n";
        else if(cnt==1) cout<<"Case "<<t++<<": There is one tree.\n";
        else cout<<"Case "<<t++<<": No trees.\n";
        memset(visited,false,sizeof(visited));
        for(int i=0;i<505;++i) A[i].clear();
    }
}
