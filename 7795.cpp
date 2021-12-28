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

int main(void){
    fast;
    int t; cin>>t;
    while(t--){
        int N,M; cin>>N>>M;
        vector<int> A(N), B(M);
        for(int i=0;i<N;++i) cin>>A[i];
        for(int i=0;i<M;++i) cin>>B[i];
        sort(A.begin(),A.end()); sort(B.begin(),B.end());
        int cnt=0;
        for(int i=0;i<N;++i){
            int nn=lower_bound(B.begin(),B.end(),A[i])-B.begin();
            cnt+=nn;
        }
        cout<<cnt<<"\n";
    }
}
