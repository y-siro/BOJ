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

const int MAX=10101;
int N;
vector<int> A[MAX];
int d[MAX];
queue<int> q;

int main(void){
    fast;
    cin>>N;
    vector<int> cost(1), B(N+1);
    for(int i=1;i<=N;++i){
        int c; cin>>c; cost.push_back(c);
        int t; cin>>t;
        while(t--){
            int ss; cin>>ss;
            A[ss].push_back(i);
            d[i]++;
        }
    }
    int ans=0;
    for(int i=1;i<=N;++i) {
        if(!d[i]) {
            q.push(i);
            B[i]=cost[i];
        }
    }

    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<A[cur].size();++i){
            int nxt=A[cur][i];
            d[nxt]--;
            if(B[nxt]<B[cur]+cost[nxt]) B[nxt]=B[cur]+cost[nxt];
            if(!d[nxt]) q.push(nxt);
        }
    }
    for(int i=1;i<=N;++i){
        if(B[i]>ans) ans=B[i];
    }
    cout<<ans;
}
