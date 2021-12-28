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

ll N,C;

struct xyz{
    ll x,y,z;
};

bool cmp1(pll p1, pll p2){
    if(p1.first==p2.first) return p1.second<p2.second;
    return p1.first<p2.first;
}

bool cmp2(xyz a, xyz b){
    if(a.y==b.y) return a.z<b.z;
    return a.y>b.y;
}

int main(void){
    fast;
    cin>>N>>C;
    vc<pll> A(N);
    for(int i=0;i<N;++i) {
        cin>>A[i].first;
        A[i].second=i;
    }
    sort(A.begin(),A.end(),cmp1);

    vc<xyz> ans;
    ll idx=A[0].first, idx_s=A[0].second, cnt=0;
    for(int i=0;i<N;++i){
        if(A[i].first==idx){
            A[i].second=min(A[i].second,idx_s);
            cnt++;
        }
        else{
            ans.pb({idx,cnt,idx_s});
            idx=A[i].first; idx_s=A[i].second;
            cnt=1;
        }

        if(i==N-1) ans.pb({idx,cnt,idx_s});
    }
    sort(ans.begin(),ans.end(),cmp2);
    for(int i=0;i<ans.size();++i){
        for(int j=0;j<ans[i].y;++j){
            cout<<ans[i].x<<' ';
        }
    }
}
