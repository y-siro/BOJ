#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 14656 조교는 새디스트야!! - 구현

int N,num,ans=0;

int main(void){
    fast;
    cin>>N;
    for(int i=1;i<=N;++i){
        cin>>num;
        if(i!=num) ans++;
    }
    cout<<ans;
}
