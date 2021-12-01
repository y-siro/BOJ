#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1357 뒤집힌 덧셈 - 구현, 문자열

int main(void){
    string X,Y,xv="",yv="",ans=""; cin>>X>>Y;
    for(int i=X.size()-1;i>=0;--i) xv+=X[i];
    for(int i=Y.size()-1;i>=0;--i) yv+=Y[i];
    int n=stoi(xv)+stoi(yv);
    string s=to_string(n);
    for(int i=s.size()-1;i>=0;--i) {
        ans+=s[i];
    }
    while(ans.front()=='0'){
        ans.erase(0,1);
    }
    cout<<ans;
}
