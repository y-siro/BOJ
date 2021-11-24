#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1259 팰린드롬수

int main(void){
    fast;
    while(true){
        string s; cin>>s;
        if(s=="0") return 0;
        bool check = true;
        for(int i=0;i<s.size();++i){
            if(s[i]!=s[s.size()-i-1]) check=false;
        }
        if(check) cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";
    }
}
