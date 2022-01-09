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
    vector<pii> A(8);
    for(int i=0;i<A.size();++i) {
        cin>>A[i].first;
        A[i].second=i;
    }
    sort(A.begin(),A.end(),greater<>());
    int sum=0; vector<int> B;
    for(int i=0;i<5;++i) {
        sum+=A[i].first;
        B.pb(A[i].second+1);
    }
    sort(B.begin(),B.end());
    cout<<sum<<"\n";
    for(int i=0;i<B.size();++i) cout<<B[i]<<' ';
}
