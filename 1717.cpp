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

int N,M,par[1010101];

void init(int N){
    for(int i=0;i<=N;++i) par[i]=i;
}

int find(int x){
    if(x==par[x]) return x;
    int p=find(par[x]);
    par[x]=p;
    return p;
}

void Union(int x, int y){
    x=find(x); y=find(y);
    if(x!=y) par[y]=x;
}

int main(void){
    fast;
    cin>>N>>M;
    init(N);
    for(int i=0;i<M;++i){
        int cmd,a,b; cin>>cmd>>a>>b;
        if(cmd==0) Union(a,b);
        else{
            int ap=find(a), bp=find(b);
            if(ap==bp) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}
