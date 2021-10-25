#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 23256 성인 게임 - DP

long long d[1111111][2],T,N;
const long long MOD = 1e9+7;

int main(){
    fast;
    d[0][0] = 1; d[1][0] = 1;
    d[0][1] = 1; d[1][1] = 3;
    for(int i=2; i<1111111; i++){
        d[i][0]=((d[i-1][1]+d[i-2][1]*2%MOD)%MOD+d[i-1][0]*2%MOD) %MOD;
        d[i][1]=(d[i-1][1]*2%MOD+d[i][0])%MOD;
    }

    cin >> T;
    while(T--){
        cin >> N;
        cout << d[N+1][0] << endl;
    }
}
