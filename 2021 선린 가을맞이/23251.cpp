#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 23251 스물셋 : 사칙연산, 애드 혹

int t, k;

int main(void){
    fast;
    cin>>t;
    while(t--){
        cin>>k;
        cout << 23*k << "\n";
    }
    return 0;
}
