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

// 2294 동전 2 - 다이나믹 프로그래밍

int n,k;
int arr[111],d[11111];

int main(void){
    fast;
    cin>>n>>k;
    for(int i=1;i<=k;++i) d[i]=11111;

    for(int i=1;i<=n;++i){
        cin>>arr[i];
        for(int j=arr[i];j<=k;++j) d[j]=min(d[j],d[j-arr[i]]+1);
    }
    if(d[k]==11111) cout<<-1;
    else cout<<d[k];
}
