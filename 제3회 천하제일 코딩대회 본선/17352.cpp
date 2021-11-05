#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 17352 여러분의 다리가 되어 드리겠습니다! - 그래프 이론, 자료 구조, 그래프 탐색, 분리 집합

int N,s,e,par[300001];

void init(int n){
    for(int i=1;i<=n;++i) par[i]=i;
}

int find(int v){
    if(v==par[v]) return v;
    return par[v]=find(par[v]); // Path Compression
}

int main(void){
    fast;
    cin>>N;
    init(N);
    for(int i=0;i<N-2;++i){
        cin>>s>>e;
        s=find(s), e=find(e);
        par[e]=s;
    }
    for(int i=1;i<=N;++i) {
        if(find(i)==i) {
            cout<<i<<" ";
        }
    }
}
