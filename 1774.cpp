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

int N,M;
int par[1010];
vector<pair<double,pair<int,int>>> A;
vector<pair<int,int> > star;
double ans=0;

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

double F(int x1, int y1, int x2, int y2){
    return (double)sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main(void){
    fast;

    cin>>N>>M;
    init();
    star.push_back({0,0});
    for(int i=0;i<N;++i){
        int x,y; cin>>x>>y;
        star.push_back({x,y});
    }
    for(int i=0;i<M;++i){
        int u,v; cin>>u>>v;
        if(find(u)!=find(v)) Union(u,v);
    }
    for(int i=1;i<N;++i){
        for(int j=i+1;j<=N;++j){
            A.push_back({F(star[i].first,star[i].second,star[j].first,star[j].second),{i,j}});
        }
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();++i){
        int x=A[i].second.first, y=A[i].second.second;
        double w=A[i].first;
        if(find(x)!=find(y)){
            Union(x,y);
            ans+=w;
        }
    }
    printf("%.2f", ans);
}
