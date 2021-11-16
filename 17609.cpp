#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 17609 회문 - 구현, 문자열, 투 포인터

int T,s,e,cnt=0;
string str;

bool isPalin(string str){
    for(int s=0, e=str.length()-1; s<e;s++,e--){
        if(str[s]!=str[e]) return false;
    }
    return true;
}

bool issemiPalin(string str){
    for(int s=0, e=str.length()-1; s<e; s++,e--){
        if(str[s]!=str[e]){
            string ori=str;
            string str1=str.erase(s,1), str2=ori.erase(e,1);
            if(isPalin(str1) or isPalin(str2)) return true;
            else return false;
        }
    }
}

int main(void){
    fast;
    cin>>T;
    while(T--){
        cin>>str;
        if(isPalin(str)) cout<<0<<"\n";
        else {
            if(issemiPalin(str)) cout<<1<<"\n";
            else cout<<2<<"\n";
        }
    }
}
