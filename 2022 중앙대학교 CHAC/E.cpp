#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue<int>
#define pql priority_queue<int, vector<int>, greater<> >
#define pii pair<int,int>
#define pll pair<ll,ll>

const int MAX = 101010;
int N, M, res=0;
int par[MAX];

void init(int num){
    for(int i=0;i<num;i++) par[i]=i;
}

int find(int x){
    if(x==par[x]) return x;
    return par[x]=find(par[x]);
}

void Union(int x, int y){
    x=find(x); y=find(y);
    if(x<y) par[y]=x;
    else par[x]=y;
}

bool check(int x, int y){
    x=find(x); y=find(y);
    if(x==y) return true;
    return false;
}

int main(void){
    fast;
    cin>>N>>M;
    init(N);
    for(int i=0;i<M;++i){
        int s,e; cin>>s>>e;
        Union(s,e);
    }
    vector<int> table(N);
    for(int i=0;i<N;++i) cin>>table[i];
    for(int i=0;i<N-1;++i){
        if(!check(table[i], table[i+1])) res++;
    }
    cout<<res;
}
