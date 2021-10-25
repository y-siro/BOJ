#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 23252 블록 - 많은 조건 분기

int T,A,B,C;
int main(void){
    fast;
    cin>>T;
    while(T--){
        cin>>A>>B>>C;
        if(A<C){
            cout<<"No"<<"\n";
            continue;
        }
        if(A&&B%2==1) B--;

        if((A-C)%2==0&&(B%2==0)) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    return 0;
}
