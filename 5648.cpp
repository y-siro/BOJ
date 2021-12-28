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
    vector<long long> A;
    for(int i=0;i<N;++i){
        string s; cin>>s;
        if(s.back()=='0') s.pop_back();
        reverse(s.begin(),s.end());
        ll num=stoll(s);
        A.pb(num);
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();++i) cout<<A[i]<<"\n";
}

// stoi :: stoll
