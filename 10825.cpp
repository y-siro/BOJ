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

struct st{
    string name;
    int x,y,z;
};

bool cmp(st s1, st s2){
    if(s1.x==s2.x and s1.y==s2.y and s1.z==s2.z) return s1.name<s2.name;
    if(s1.x==s2.x and s1.y==s2.y) return s1.z>s2.z;
    if(s1.x==s2.x) return s1.y<s2.y;
    return s1.x>s2.x;
}

int main(void){
    fast;
    int N; cin>>N;
    vc<st> A(N);
    for(int i=0;i<N;++i) cin>>A[i].name>>A[i].x>>A[i].y>>A[i].z;
    sort(A.begin(),A.end(),cmp);
    for(int i=0;i<A.size();++i) cout<<A[i].name<<"\n";
}

