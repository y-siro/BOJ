#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// 1976 여행 가자 - 그래프 이론, 자료 구조, 그래프 탐색, 분리 집합

int N,M,num,res,cur;
int par[222];

void init(int n){
    for(int i=1;i<=n;++i) par[i]=i;
}

int find(int v){
    if(par[v]==v) return v;
    return par[v]=find(par[v]);
}

bool merge(int u, int v){
    u=find(u), v=find(v);
    if(u==v) return true;
    par[u]=v;
    return true;
}

bool check(){
    cin>>res;
    for(int i=1;i<M;++i){
        cin>>cur;
        if(find(cur)!=find(res)) return false;
        res=cur;
    }
    return true;
}

int main(void){
    fast;
    cin>>N>>M;
    init(N);
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            cin>>num;
            if(num) merge(i,j);
        }
    }
    if(check()) cout<<"YES";
    else cout<<"NO";
}
