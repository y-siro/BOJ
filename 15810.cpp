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

int main(void){
    fast;
    int N,M; cin>>N>>M;
    vector<int> A(N);
    for(int i=0;i<N;++i) cin>>A[i];
    ll l=1, r=1000000000000, ans=1e12;
    while(l<=r){
        ll sum=0, mid=(l+r)/2;
        for(int i=0;i<N;++i) sum+=mid/A[i];
        if(sum>=M){
            r=mid-1; ans=min(ans,mid);
        }
        else l=mid+1;
    }
    cout<<ans;
}
