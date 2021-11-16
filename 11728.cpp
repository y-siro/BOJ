#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 11728 배열 합치기 - 정렬, 두 포인터
int main(void){
    fast;
    int n,m; cin>>n>>m;
    vector<int> v,r;
    v.resize(n+1); r.resize(m+1);
    for(int i=0;i<n;++i) cin>>v[i];
    for(int i=0;i<m;++i) cin>>r[i];
    int idx_v=0, idx_r=0;
    while(idx_v<n and idx_r<m){
        if(v[idx_v]>r[idx_r]){
            cout<<r[idx_r++]<<" ";
        }
        else{
            cout<<v[idx_v++]<<" ";
        }
    }
    while(idx_v<n) cout<<v[idx_v++]<<" ";
    while(idx_r<m) cout<<r[idx_r++]<<" ";
}
