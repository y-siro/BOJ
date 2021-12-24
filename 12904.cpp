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
    string S,T; cin>>S>>T;
    while(S.size()!=T.size()){
        if(T.back()=='A') T.pop_back();
        else {
            T.pop_back();
            reverse(T.begin(),T.end());
        }
    }
    if(S==T) cout<<1;
    else cout<<0;
}
