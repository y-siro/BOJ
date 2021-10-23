#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 1806 : two pointers
int N,K,s=0,e=0,sum=0,len=1e9;
int arr[100001];

int main(void){
    fast;
    cin>>N>>K;
    for(int i=0;i<N;++i)cin>>arr[i];
    while(s<=e){
        if(sum>=K){
            len=min(len,e-s);
            sum-=arr[s++];
        }
        else if(e==N) break;
        else sum+=arr[e++];
    }
    if(len==1e9) cout<<"0";
    else cout << len;
    return 0;
}
