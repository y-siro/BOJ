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

// 10867 중복 빼고 정렬하기

int main(void){
    fast;
    int N; cin>>N;
    set<int> s;
    for(int i=0;i<N;++i){
        int a; cin>>a;
        s.insert(a);
    }
    for(auto iter=s.begin(); iter!=s.end();++iter) cout<<*iter<<' ';
}
