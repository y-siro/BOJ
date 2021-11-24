#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 2902 KMP는 왜 KMP일까?

int main(void){
    fast;
    string s,answer=""; cin>>s;
    for(int i=0;i<s.size()-1;++i){
        if(i==0) answer+=s[i];
        if(s[i]=='-') answer+=s[i+1];
    }
    cout<<answer;
}
