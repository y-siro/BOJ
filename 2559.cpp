#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// BOJ 2559 : prefix sum, two pointer
const int M=100001;
int n,k,max_val=-1e9,sum=0;
int arr[M],d[M];

// pass

int main(void){
    fast;
    cin>>n>>k;
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<k;++i){
        sum+=arr[i];
    }
    d[0]=sum-arr[0];
    max_val=sum;
    for(int i=0;i<n-k;++i){
        sum=d[i]+arr[i+k];
        d[i+1]=sum-arr[i+1];
        max_val=max(max_val,sum);
        sum=0;
    }
    cout << max_val;

    return 0;
}


// timeout
int main(void){
    fast;
    cin>>n>>k;
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<n-k;++i){
        for(int j=i;j<i+k;++j){
            sum[i]+=arr[j];
        }
        max_val=max(max_val,sum[i]);
    }

    cout << max_val;

    return 0;
}

