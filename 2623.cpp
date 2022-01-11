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

int N, M;
vector<int> A[1010], d(1010), ans;
pql q;

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<M;++i){
        int w; cin>>w;
        int f; cin>>f;
        for(int j=0;j<w-1;++j){
            int ff; cin>>ff;
            A[f].pb(ff);
            d[ff]++;
            f=ff;
        }
    }
    for(int i=1;i<=N;++i) if(!d[i]) q.push(i);
    while(!q.empty()){
        auto cur=q.top(); q.pop();
        ans.pb(cur);
        for(int i=0;i<A[cur].size();++i){
            int nxt=A[cur][i];
            if(!--d[nxt]) q.push(nxt);
        }
    }
    if(ans.size()==N){
        for(auto i:ans) cout<<i<<"\n";
    }
    else cout<<0;
}
