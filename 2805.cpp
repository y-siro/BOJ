#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define vc vector
#define vi vector<int>
#define vl vector<ll>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long int ll;

// 2805 나무 자르 - 이분 탐색

ll N,M,max_val=0;
ll arr[1111111];

int bs(int num){
    int l=0; int r=num;
    ll sum;
    while(l<=r){
        sum=0;
        ll mid=(l+r)/2;
        for(int i=0;i<N;++i){
            if(arr[i]>mid) sum+=arr[i]-mid;
        }
        if(sum>=M) l=mid+1;
        else r=mid-1;
    }
    return r;
}

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<N;++i) {
        cin>>arr[i];
        max_val=max(max_val, arr[i]);
    }
    sort(arr,arr+N);
    cout << bs(max_val);
}
