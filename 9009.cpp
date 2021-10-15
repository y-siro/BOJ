#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
int t, n;
int d[46];
vi v;
void pibo(){
    d[0]=0;
    d[1]=1;
    for(int i=2;i<=45;++i) d[i]=d[i-1]+d[i-2];
}

int main() {
    fast;

    cin>>t;
    pibo();
    while(t--){
        cin>>n;
        for(int i=45;i>=0;--i){
            if(d[i]<=n){
                n-=d[i];
                v.pb(d[i]);
            }
        }
        for(int i=v.size()-2;i>=0;--i) cout << v[i] << " ";
        cout << "\n";

        v.erase(v.begin(),v.end());
    }

    return 0;
}
