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

ll N,B,C;

int main(void){
    fast;
    cin>>N>>B>>C;
    if(B<C) C=B;
    vector<ll> A(N+2);
    ll ans=0;
    for(int i=0;i<N;++i) cin>>A[i];
    for(int i=0;i<N;++i){
        if(A[i+1]<A[i+2]){
            ll mm=min(A[i],min(A[i+1],A[i+2]));
            ans+=(B+(2*C))*mm;
            A[i]-=mm; A[i+1]-=mm; A[i+2]-=mm;

            ll mmm=min(A[i],A[i+1]);
            ans+=(B+C)*mmm;
            A[i]-=mmm; A[i+1]-=mmm;
        }
        else{
            ll mm=min(A[i],A[i+1]-A[i+2]);
            ans+=(B+C)*mm;
            A[i]-=mm; A[i+1]-=mm;

            ll mmm=min(A[i],min(A[i+1],A[i+2]));
            ans+=(B+(2*C))*mmm;
            A[i]-=mmm; A[i+1]-=mmm; A[i+2]-=mmm;
        }
        ans+=B*A[i];
    }
    cout<<ans;
    return 0;
}
