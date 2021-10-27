#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 14649 문홍안 - 구현

int P,N,idx;
double blue=0,red=0,green=0;
int cnt[101];
string s;

int main(void){
    fast;
    cin>>P>>N;
    while(N--){
        cin>>idx>>s;
        if(s=="L"){
            for(int i=1;i<idx;++i) cnt[i]++;
        }
        if(s=="R"){
            for(int i=100;i>idx;--i) cnt[i]++;
        }
    }
    for(int i=1;i<=100;++i){
        if(cnt[i]%3==0)blue++;
        else if(cnt[i]%3==1)red++;
        else green++;
    }
    printf("%.2lf\n",P*(blue/100));
    printf("%.2lf\n",P*(red/100));
    printf("%.2lf\n",P*(green/100));
}
