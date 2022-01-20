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

int N,K;
int psum[101010];

int main(void){
    fast;
    cin>>N>>K;
    vector<int> A(N);
    for(int i=0;i<N;++i) {
        cin>>A[i];
        if(!i) psum[i]=A[i];
        else psum[i]=psum[i-1]+A[i];
    }
    int s=0;
    for(int i=0;i<K;++i) s+=A[i];

    int ret=s;
    for(int i=K;i<N;++i){
        ret=max(ret,psum[i]-psum[i-K]);
    }
    cout<<ret;
}
