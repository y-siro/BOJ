#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 1967 : tree, dfs

int N,sum=0,p,c,w,e;
const int M=10001;
vector<pii> v[M];
bool visited[M]={false,};

void dfs(int num, int cw){
    if(visited[num]) return;
    visited[num]=true;
    if(sum<cw){
        sum=cw;
        e=num;
    }
    for(int i=0;i<v[num].size();++i) dfs(v[num][i].first, cw+v[num][i].second);
}

int main(void){
    fast;
    cin>>N;
    for(int i=0;i<N-1;++i){
        cin>>p>>c>>w;
        v[p].pb(mp(c,w));
        v[c].pb(mp(p,w));
    }
    dfs(1,0);
    sum=0;
    memset(visited,false,sizeof(visited));
    dfs(e,0);
    cout<<sum;

    return 0;
}
