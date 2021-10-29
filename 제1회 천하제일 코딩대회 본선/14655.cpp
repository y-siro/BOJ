#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 14655 욱제는 도박쟁이야!! - 그리디 알고리즘

ll N,num,ans=0;
int main(void){
    fast;
    cin>>N;
    for(int i=0;i<2*N;++i) {
        cin>>num;
        ans+=abs(num);
    }
    cout<<ans;
}
