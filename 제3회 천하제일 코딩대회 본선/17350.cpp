#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 17350 2루수 이름이 뭐야 - 구현, 문자열

int N;
string s;

int main(void){
    fast;
    cin>>N;
    while(N--){
        cin>>s;
        if(s=="anj") {
            cout << "뭐야;"; return 0;
        }
    }
    cout << "뭐야?";
}
