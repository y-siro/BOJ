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

int N,K,A,B;

int main(void){
    fast;
    cin>>N>>K>>A>>B;
    N/=A; A=1;
    vector<int> A(N,K);
    int idx=0,cnt=0;
    while(true){
        cnt++;
        A[idx]+=B;
        idx++; if(idx==N) idx=0;
        for(int i=0;i<A.size();++i) {
            A[i]--;
            if(!A[i]){
                cout<<cnt; return 0;
            }
        }
    }
}
