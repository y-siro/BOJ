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

int main(){
    fast;
    int N,M,J; cin>>N>>M>>J;
    int cnt=0, l=1, r=M;

    for(int i=0;i<J;++i){
        int x; cin>>x;
        if(x>=l and x<=r) continue;
        else if(x>r){
            while(x>r){
                cnt++; l++; r++;
            }
        }
        else if(x<l){
            while(x<l){
                cnt++; l--; r--;
            }
        }
    }
    cout<<cnt;
}
