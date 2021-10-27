#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 14648 쿼리 맛보기 - 구현

ll n,q,num,res=0,res2=0;
int arr[1111];

int main(void){
    fast;
    cin>>n>>q;
    for(int i=1;i<=n;++i) cin>>arr[i];
    while(q--){
        cin>>num;
        if(num==1){
            int s,e; cin>>s>>e;
            for(int i=s;i<=e;++i) res+=arr[i];
            cout<<res<<"\n";
            swap(arr[s],arr[e]);
            res=0;
        }
        if(num==2){
            int s1,s2,e1,e2; cin>>s1>>e1>>s2>>e2;
            for(int i=s1;i<=e1;++i) res+=arr[i];
            for(int i=s2;i<=e2;++i) res2+=arr[i];
            cout<<res-res2<<"\n";
            res=0;res2=0;
        }
    }
}
