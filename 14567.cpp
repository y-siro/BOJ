#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue<int>
#define pql priority_queue<int, vector<int>, greater<int> >
#define pii pair<int,int>
#define pll pair<ll,ll>

int N,M;
int d[1010];
vector<int> A[1010];
queue<int> q;

int main(void){
    fast;
    cin>>N>>M;
    memset(d,0,sizeof(d));
    for(int i=0;i<M;++i){
        int a,b; cin>>a>>b;
        A[a].push_back(b);
        d[b]++;
    }

    for(int i=1;i<=N;++i) if(!d[i]) q.push(i);
    vector<int> ans(N+1,1);
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<A[cur].size();++i){
            int nxt=A[cur][i];
            d[nxt]--;
            if(!d[nxt]) {
                q.push(nxt);
                ans[nxt]=max(ans[nxt],ans[cur]+1);
            }
        }
    }
    for(int i=1;i<=N;++i) cout<<ans[i]<<' ';
}
