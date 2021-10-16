#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back

int n, m,num;
vi v, vv;
int vvv[500001]={0,};
int main(void){
    fast;
    
    cin>>n;
    for(int i=0;i<n;++i) {
        cin>>num;
        v.pb(num);
    }
    cin>>m;
    for(int i=0;i<m;++i) {
        cin>>num;
        vv.pb(num);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;++i){
        int right=n-1;
        int left=0;
        while(left<=right){
            int mid= (right+left)/2;
            if(v[mid]==vv[i]){
                vvv[i]=1;
                break;
            }

            if(v[mid]>vv[i]) right=mid-1;
            else left=mid+1;
        }
    }

    for(int i=0;i<m;++i) cout << vvv[i] <<" ";
    return 0;
}

