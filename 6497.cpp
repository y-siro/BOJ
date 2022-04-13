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

int M,N;
int par[202020];
vector<pair<int,pair<int,int>>> A;

void init(int num){
    for(int i=0;i<num;++i) par[i]=i;
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

    while(true){
        cin>>M>>N;
        if(M==0 and N==0) return 0;
        init(M);
        int pre=0, ans=0;
        for(int i=0;i<N;++i){
            int u,v,w; cin>>u>>v>>w;
            A.push_back({w,{u,v}});
            pre+=w;
        }
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();++i){
            int x=A[i].second.first, y=A[i].second.second, w=A[i].first;
            if(find(x)!=find(y)){
                Union(x,y);
                ans+=w;
            }
        }
        cout<<pre-ans<<'\n';
        A.clear();
    }
}
