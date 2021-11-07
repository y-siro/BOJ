#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// 1918 후위 표기식 - 자료 구조, 스택

int main(void){
    fast;
    string str; cin>>str;
    stack<char> s;
    for(int i=0;i<str.size();++i){
        if(str[i]=='*' or str[i]=='/'){
            while(!s.empty() and (s.top()=='*' or s.top()=='/')){
                cout<<s.top(); s.pop();
            }
            s.push(str[i]);
        }
        else if(str[i]=='(') s.push(str[i]);
        else if(str[i]==')'){
            while(!s.empty() and s.top()!='('){
                cout<<s.top(); s.pop();
            }
            s.pop();
        }
        else if(str[i]=='+' or str[i]=='-'){
            while(!s.empty() and s.top()!='('){
                cout<<s.top(); s.pop();
            }
            s.push(str[i]);
        }
        else {
            cout<<str[i];
        }
    }
    while(!s.empty()){
        cout<<s.top(); s.pop();
    }
}
