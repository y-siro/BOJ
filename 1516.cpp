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

int N;
vector<int> A[505];
int d[505];
queue<int> q;

int main(void){
    fast;
    cin>>N;
    vector<int> B(1),ans(1);
    for(int i=1;i<=N;++i){
        int cost; cin>>cost; B.emplace_back(cost); ans.emplace_back(cost);
        while(true){
            int re; cin>>re; if(re==-1) break;
            A[re].emplace_back(i);
            d[i]++;
        }
    }
    for(int i=1;i<=N;++i) if(!d[i]) q.push(i);

    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<A[cur].size();++i){
            int nxt=A[cur][i];
            ans[nxt]=max(ans[nxt], ans[cur]+B[nxt]);
            d[nxt]--;
            if(!d[nxt]) q.push(nxt);
        }
    }
    for(int i=1;i<=N;++i) cout<<ans[i]<<"\n";
}
