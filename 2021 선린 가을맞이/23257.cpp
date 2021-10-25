#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 23257 비트코인은 신이고 나는 무적이다 - knapsack dp, bitmasking

const int MAX = 2222;
int N,M,num,idx=1024,arr[MAX],d[MAX][MAX];
int main(void){
    fast;
    cin>>N>>M;
    for(int i=1;i<=N;++i){
        cin>>num; if(num<0) num*=-1;
        arr[i]=num; d[1][num]=1;
    }
    for(int i=2;i<=M;++i){
        for(int j=1;j<=N;++j){
            for(int l=0;l<=1024;++l){
                d[i][l^arr[j]]|=d[i-1][l];
            }
        }
    }
    while(idx--){
        if(d[M][idx]){
            cout << idx;
            return 0;
        }
    }
}
