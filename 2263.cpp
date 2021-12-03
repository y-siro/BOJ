#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll,ll>

// 2263 트리의 순회 - 트리, 분할 정복, 재귀

int n, po[111111],io[111111],ro[111111];
void dfs(int s1,int e1, int s2,int e2){
    if(s1>e1) return;
    int root=po[e2];
    cout<<root<<" ";
    int pos=ro[root];
    dfs(s1,pos-1,s2,s2+(pos-1-s1));
    dfs(pos+1,e1,s2+pos-s1,e2-1);
    return;
}

int main(void){
    fast;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>io[i];
        ro[io[i]]=i;
    }
    for(int i=0;i<n;++i){
        cin>>po[i];
    }
    dfs(0,n-1,0,n-1);
}
