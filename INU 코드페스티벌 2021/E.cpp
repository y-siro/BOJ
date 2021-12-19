#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long

ll N,ans=0;
vector<int> v;
ll m[202020];

int main(void){
    fast;
    cin>>N;
    memset(m,0,sizeof(m));
    v.resize(N);
    for(int i=0;i<N;++i) {
        cin>>v[i]; m[v[i]]++;
    }


    sort(v.begin(),v.end());
    ll Q,cnt;
    for(int i=0;i<N;++i){
        if(m[v[i]]){
            m[v[i]]--;
            Q=v[i], cnt=1;
            for(int j=v[i]+1;;++j){
                if(m[j]){
                    Q=j; m[j]--; cnt++;
                }
                else{
                    ans+=Q*cnt;
                    break;
                }
            }
        }
    }
    cout<<ans;
}
