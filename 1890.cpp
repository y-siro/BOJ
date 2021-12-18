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

// 1890 점프

ll N;
ll d[101][101], ans[101][101];

int main(void){
    fast;
    cin>>N;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            cin>>d[i][j];
        }
    }
    memset(ans,0,sizeof(ans));
    ans[1][1]=1;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(i+d[i][j]<=N and ans[i][j] and !(i==N and j==N)) ans[i+d[i][j]][j]+=ans[i][j];
            if(j+d[i][j]<=N and ans[i][j] and !(i==N and j==N)) ans[i][j+d[i][j]]+=ans[i][j];
        }
    }
    cout<<ans[N][N];
}
