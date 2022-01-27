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

unsigned long long gcd(int x, int y){
    if(y==0) return x;
    return gcd(y, x%y);
}

int main(void){
    fast;
    unsigned long long x,y; cin>>x>>y;
    unsigned long long ret = gcd(x,y);
    while(ret--) cout<<1;
}
