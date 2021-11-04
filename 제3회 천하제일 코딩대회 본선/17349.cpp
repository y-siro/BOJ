#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 17349 1루수가 누구야 - 구현

int c;
vector<pair<int,int>> v;
set<int> s;

int main(void){
    fast;
    v.resize(10);
    for(int i=1;i<=9;++i) cin>>v[i].first>>v[i].second;

    for(int i=1;i<=9;++i){
        for(int j=1;j<=9;++j){
            c=1;
            for(int k=1;k<=9;++k){
                if(i==k){
                    if(v[k].first>0 and v[k].second==j) c=0;
                    if(v[k].first==0 and v[k].second!=j) c=0;
                }
                else{
                    if(v[k].first>0 and v[k].second!=j) c=0;
                    if(v[k].first==0 and v[k].second==j) c=0;
                }
            }
            if(c) s.insert(j);
        }
    }
    if(s.size()==1) cout<<*s.begin();
    else cout << -1;
}
