#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>

int N, M;
vector<int> A[32323], d(32323);
pq<int, vector<int>, greater<> > q;

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<M;++i){
        int a,b; cin>>a>>b;
        A[a].push_back(b);
        d[b]++;
    }
    for(int i=1;i<=N;++i) if(!d[i]) q.push(i);
    while(!q.empty()){
        auto cur=q.top(); q.pop();
        cout<<cur<<' ';
        for(int i=0;i<A[cur].size();++i){
            int nxt=A[cur][i];
            if(!--d[nxt]) q.push(nxt);
        }
    }
}
