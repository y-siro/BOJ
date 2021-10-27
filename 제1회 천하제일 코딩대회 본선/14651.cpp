#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 14651 걷다보니 신천역 삼 (Large) - 수학, 다이나믹 프로그래밍, 정수론

const int mod=1e9+9;
ll N, d[33334];
void dp(int num){
    d[1]=0; d[2]=2;
    for(int i=3;i<=num;++i){
        d[i]=d[i-1]*3;
        d[i]%=mod;
    }
}
int main(void){
    fast;
    cin>>N;
    dp(N);
    cout << d[N];
}
