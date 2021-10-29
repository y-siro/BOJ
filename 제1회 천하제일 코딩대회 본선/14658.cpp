#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 14658 하늘에서 별똥별이 빗발친다 - 브루트포스 알고리즘

int N,M,L,K,x,y,mx=0,cnt=0,ans=0;
vector<pair<int,int>>v;

int main(void){
    fast;
    cin>>N>>M>>L>>K;
    for(int i=0;i<K;++i){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<K;++i){
        for(int j=0;j<K;++j){
            for(int l=0;l<K;++l){
                if(v[i].first<=v[l].first and v[l].first<=v[i].first+L){
                    if(v[j].second<=v[l].second and v[l].second<=v[j].second+L){
                        cnt++;
                    }
                }
            }
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    cout << K-mx;
}
