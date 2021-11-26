#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 7567 그릇

int main(void){
    fast;
    string s; cin>>s;
    int state=0; int ans=0; // state - 0:init,1:),2:(
    for(int i=0;i<s.size();++i){
        if(s[i]=='(' and state!=2){
            state=2; ans+=10;
        }
        else if(s[i]=='(' and state==2) ans+=5;
        else if(s[i]==')' and state!=1) {
            state=1; ans+=10;
        }
        else if(s[i]==')' and state==1) ans+=5;
    }
    cout<<ans;
}
