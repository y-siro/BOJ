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
#define F first
#define S second

// boj 2021 아주대학교 프로그래밍 경시대회 APC Open Contest - D

int N,T,mt=0,mv=0,idx=0,ans=-1;
int arr[1111];

int main(void){
    fast;
    cin>>N>>T;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<N;++i){
        int num; cin>>num;
        for(int j=0;j<num;++j){
            int a,b; cin>>a>>b;
            mt=max(mt,b);
            for(int k=a;k<b;++k) arr[k]++;
        }
    }
    for(int i=0;i<=mt-T;++i){
        idx=0;
        for(int j=i;j<i+T;++j){
            idx+=arr[j];
        }
        if(idx>mv){
            mv=idx; ans=i;
        }
    }
    cout << ans<<" "<<ans+T;
}
