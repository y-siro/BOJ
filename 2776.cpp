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
    int t; cin>>t;
    while(t--){
        int N, M;
        cin>>N; vi A(N);
        for(int i=0;i<N;++i) cin>>A[i]; sort(A.begin(),A.end());
        cin>>M;
        for(int i=0;i<M;++i){
            int l=0, r=N-1, num;
            cin>>num;
            while(l<=r){
                int mid=(l+r)/2;
                if(A[mid]==num){
                    cout<<1<<"\n"; break;
                }
                else if(A[mid]<num){
                    l=mid+1;
                    if(l>r){
                        cout<<0<<"\n"; break;
                    }
                }
                else {
                    r=mid-1;
                    if(l>r){
                        cout<<0<<"\n"; break;
                    }
                }
            }
        }
    }
}
