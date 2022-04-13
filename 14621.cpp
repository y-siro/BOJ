#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <math.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long

int N,M,ans=0;
int par[1010];
vector<pair<int,pair<int,int>>> A;
vector<int> B;

void init(){
    for(int i=1;i<=N;++i) par[i]=i;
}

int find(int x){
    if(x==par[x]) return x;
    return par[x]=find(par[x]);
}

void Union(int x, int y){
    x=find(x); y=find(y);
    par[y]=x;
}

int main(void){
    fast;

    cin>>N>>M;
    init();
    B.push_back(-1);
    for(int i=0;i<N;++i){
        char o; cin>>o;
        if(o=='M') B.push_back(0);
        else B.push_back(1);
    }
    for(int i=0;i<M;++i){
        int u,v,w; cin>>u>>v>>w;
        A.push_back({w,{u,v}});
    }
    sort(A.begin(),A.end());

    int ca=0;
    for(int i=0;i<A.size();++i){
        int x=A[i].second.first, y=A[i].second.second, w=A[i].first;
        if(B[x]==B[y]) continue;
        if(find(x)!=find(y)){
            Union(x,y);
            ans+=w;
            ca++;
        }
    }
    if(ca==N-1) cout<<ans;
    else cout<<-1;
}
