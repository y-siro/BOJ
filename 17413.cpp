#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

bool c=false;
string str;
stack<char> s;
int main(void){
    fast;
    getline(cin,str);
    str+='\n';
    for(int i=0;i<str.size();++i){
        if(str[i]=='<'){
            while(!s.empty()){
                cout<<s.top();
                s.pop();
            }
            cout<<"<";
            c=true;
        }
        else if(str[i]=='>'){
            cout<<">";
            c=false;
        }
        else if(str[i]==' '||str[i]=='\n'){
            while(!s.empty()){
                cout<<s.top();
                s.pop();
            }
            cout<<" ";
        }
        else if(c) cout << str[i];
        else s.push(str[i]);
    }

    return 0;
}
