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

int N,K,W;
int d[1010];
vector<int> A[1010];

int main(void){
    fast;
    int t; cin>>t;
    while(t--){
        memset(d,0,sizeof(d));
        memset(A,0,sizeof(A));
        cin>>N>>K;
        vector<int> time(N+1),ans(N+1);
        for(int i=1;i<=N;++i) cin>>time[i];
        for(int i=0;i<K;++i){
            int x,y; cin>>x>>y;
            A[x].push_back(y);
            d[y]++;
        }
        queue<int> q;
        for(int i=1;i<=N;++i){
            if(!d[i]) {
                q.push(i);
                ans[i]=time[i];
            }
        }
        cin>>W;
        while(!q.empty()){
            auto cur = q.front(); q.pop();
            if(cur==W) break;
            for(int i=0;i<A[cur].size();++i){
                int nxt = A[cur][i];
                d[nxt]--;
                if(!d[nxt]) q.push(nxt);
                if(ans[nxt]<ans[cur]+time[nxt]) ans[nxt]=ans[cur]+time[nxt];
            }
        }
        cout<<ans[W]<<"\n";
    }
}
