#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using pii = pair<int,int>;
// boj 22963 3초 정렬 - DP
// ic.. case

int N,cnt=0;
vector<pii> idx;

int main(void){
    fast;
    cin>>N;
    vector<int> v(N+1,0);
    for(int i=1;i<=N;++i) cin>>v[i];
    for(int i=1;i<N;++i) if(v[i]>v[i+1]) cnt++;
    if(cnt>3){
        cout<<"NO"<<"\n";
        return 0;
    }

    for(int i=N;i>=1;--i){
        if(v[i]<v[i-1]) {
            v[i-1]=v[i];
            idx.push_back(make_pair(i-1,v[i-1]));
        }
    }
    sort(idx.begin(),idx.end());
    cout<<"YES"<<"\n";
    cout<<cnt<<"\n";
    for(int i=0;i<idx.size();++i){
        cout << idx[i].first << " " << idx[i].second << "\n";
    }
    return 0;
}

