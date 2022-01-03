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
    int N; cin>>N;
    ll sum=0;
    for(int i=0;i<N*N;++i){
        int num; cin>>num;
        sum+=num;
    }
    cout<<sum;
}
