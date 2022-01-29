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

ll a, b;

ll gcd(ll x, ll y){
    if(y==0) return x;
    return gcd(y,x%y);
}

ll lcm(ll x, ll y){
    return x*y/gcd(x,y);
}

int main(void){
    fast;
    int t; cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<lcm(a,b)<<"\n";
    }
}
