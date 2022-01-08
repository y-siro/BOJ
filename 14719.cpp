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

int H, W, ans=0;
int main(void){
    fast;
    cin>>H>>W;
    vector<int> A(W);
    for(int i=0;i<W;++i) cin>>A[i];
    int l=0, r=0;
    for(int i=1;i<W-1;++i){
        int l=0, r=0;
        for(int j=0;j<i;++j) l=max(l, A[j]);
        for(int j=W-1;j>i;--j) r=max(r, A[j]);
        ans+=max(0,min(l,r)-A[i]);
    }
    cout<<ans;
}
