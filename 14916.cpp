#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, dp[101010];

int main(void){
    cin>>N;
    dp[1]=-1;
    dp[2]=1;
    dp[3]=-1;
    dp[4]=2;
    dp[5]=1;
    dp[6]=3;
    dp[7]=2;
    dp[8]=4;

    for(int i=9;i<=N;++i){
        dp[i]=min(dp[i-2]+1, dp[i-5]+1);
    }
    cout<<dp[N];
}
