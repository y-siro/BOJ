#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N,K,dp[31][31];

int main(void){
    for(int i=0;i<31;++i) dp[i][0]=1;
    for(int i=1;i<31;++i){
        for(int j=1;j<=i;++j){
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    cin>>N>>K;
    cout<<dp[N-1][K-1];
}
