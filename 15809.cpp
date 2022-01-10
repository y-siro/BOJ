#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>

int N,M;
int par[101010], A[101010];
void init(){
    for(int i=0;i<101010;++i) par[i]=i;
}

int find(int x){
    if(x==par[x]) return x;
    return par[x]=find(par[x]);
}

void Union(int x, int y){
    x=find(x); y=find(y);
    if(x==y) return;
    A[y]+=A[x];
    A[x]=0;
    par[x]=y;
}

void battle(int x, int y){
    x=find(x); y=find(y);
    if(A[x]>A[y]) swap(x,y);
    A[y]-=A[x];
    A[x]=0;
    par[x]=y;
}

int main(void){
    fast;
    cin>>N>>M;
    init();
    for(int i=1;i<=N;++i) cin>>A[i];
    for(int i=0;i<M;++i){
        int cmd; cin>>cmd;
        if(cmd==1){
            int x,y; cin>>x>>y;
            Union(x,y);
        }
        else if(cmd==2){
            int x,y; cin>>x>>y;
            battle(x,y);
        }
    }

    vector<int> ans;
    for(int i=1;i<=N;++i){
        if(!A[find(i)] or i!=par[i]) continue;
        ans.pb(A[find(i)]);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();++i) cout<<ans[i]<<' ';
}
