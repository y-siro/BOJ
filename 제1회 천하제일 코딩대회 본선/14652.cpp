#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 14652 나는 행복합니다~ - 수학, 사칙연산

int N,M,K,cnt=-1;

int main(void){
    fast;
    cin>>N>>M>>K;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;j++){
            if(++cnt==K) {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
}
