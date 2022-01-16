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

int main(void){
    fast;
    int N; cin>>N;
    vector<ll> A(N),psum(N);
    for(int i=0;i<N;++i){
        cin>>A[i];
        if(i==0) psum[i]=A[i];
        else psum[i]=psum[i-1]+A[i];
    }
    ll ret=0;
    for(int i=0;i<N-1;++i){
        ret+=A[i]*(psum[N-1]-psum[i]);
    }
    cout<<ret;
}
