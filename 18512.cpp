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
    int x,y,a,b; cin>>x>>y>>a>>b;
    int cnt=100;
    while(cnt--){
        if(a==b){
            cout<<a; return 0;
        }
        if(a>b) b+=y;
        else a+=x;
    }
    cout<<-1;
}
