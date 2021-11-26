#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 9093 단어 뒤집기

int main(void){
    fast;
    int t; cin>>t;
    vector<string> v;
    cin.ignore();
    while(t--){
        string s,temp=""; getline(cin,s);
        for(int i=0;i<s.size();++i){
            if(s[i]==' ') {
                v.push_back(temp); temp="";
            }
            else temp+=s[i];
        }
        v.push_back(temp); temp="";
        for(int i=0;i<v.size();++i){
            for(int j=v[i].size()-1;j>=0;--j){
                cout<<v[i][j];
            }
            cout<<" ";
        }
        v.clear();
        cout<<"\n";
    }
}
