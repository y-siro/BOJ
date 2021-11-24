#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1212 8진수 2진수

string f[8]={"","1","10","11","100","101","110","111"}, s[8]={"000","001","010","011","100","101","110","111"};
int main(void){
    fast;
    string str;cin>>str;
    cout<<f[str[0]-'0'];
    if(str=="0"){
        cout<<0;return 0;
    }
    for(int i=1;i<str.size();++i) cout<<s[str[i]-'0'];
}
