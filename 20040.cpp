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

const int MAX=505050;
int N, M;
int par[MAX];

int find(int x){
    if(x==par[x]) return x;
    return par[x]=find(par[x]);
}

bool is_Union(int x, int y){
    x=find(x); y=find(y);
    if(x==y) return true;
    par[x]=y;
    return false;
}

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<N;++i) par[i]=i;
    for(int i=1;i<=M;++i){
        int x,y; cin>>x>>y;
        if(is_Union(x,y)){
            cout<<i; return 0;
        }
    }
    cout<<0;
}
