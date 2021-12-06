#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

// 11048 이동하기 - 다이나믹 프로그래밍

int N,M;
int d[1111][1111], v[1111][1111];

void dp(void){
    d[1][1]=v[1][1];
    for(int i=2;i<=max(N,M);++i){
        d[1][i]=d[1][i-1]+v[1][i];
        d[i][1]=d[i-1][1]+v[i][1];
    }
    for(int i=2;i<=N;++i){
        for(int j=2;j<=M;++j){
            d[i][j]=max(d[i-1][j],max(d[i][j-1],d[i-1][j-1]))+v[i][j];
        }
    }
}

int main(void){
    fast;
    cin>>N>>M;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=M;++j){
            cin>>v[i][j];
        }
    }
    memset(d,-1,sizeof(d));
    dp();
    cout<<d[N][M];
}
