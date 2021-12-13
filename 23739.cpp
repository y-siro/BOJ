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

// 23739 벼락치기

int N,ans=0,sum=0;
vi v;

int main(void){
    fast;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;++i) {
        cin>>v[i];
        if((v[i]+1)/2<=30-sum) ans++;
        sum+=v[i];
        if(sum>=30) sum=0;
    }
    cout<<ans;
}
