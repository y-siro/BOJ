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

int N;
ll ans=0;
int par[1010];
int B[1010][1010];
vector<pair<int,pair<int,int>>> A;


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

    cin>>N;
    init();
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            cin>>B[i][j];
        }
    }
    for(int i=1;i<N;++i){
        for(int j=i+1;j<=N;++j){
            A.push_back({B[i][j],{i,j}});
        }
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();++i){
        int x=A[i].second.first, y=A[i].second.second, w=A[i].first;
        if(find(x)!=find(y)){
            Union(x,y);
            ans+=w;
        }
    }
    cout<<ans;
}
