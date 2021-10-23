#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 2003 : two pointers
int N,M,s=0,e=0,cnt=0;
int arr[10001];

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<N;++i) cin>>arr[i];
    int sum=arr[0];

    while(s<=e&&e<N){
        if(sum<M) sum+=arr[++e];
        else if(sum==M){
            sum+=arr[++e];
            cnt++;
        }
        else if(sum>M){
            sum-=arr[s++];
            if(s>e){
                e=s;
                sum=arr[s];
            }
        }
    }
    cout << cnt;

    return 0;
}
