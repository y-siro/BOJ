#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 2745 진법 변환

int main(void){
    fast;
    string N; int B,cnt=0,ans=0;
    cin>>N>>B;
    for(int i=N.size()-1;i>=0;--i){
        if(N[i]>=65) ans+=(int)pow(B,cnt)*((int)N[i]-55);
        else ans+=(int)pow(B,cnt)*((int)N[i]-48);
        cnt++;
    }
    cout<<ans;
}
