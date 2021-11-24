#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 11656 접미사 배열

int main(void){
    fast;
    string s; cin>>s;
    vector<string> v;
    for(int i=0;i<s.size();++i){
        string str="";
        for(int j=i;j<s.size();++j){
            str+=s[j];
        }
        v.push_back(str);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();++i) cout<<v[i]<<"\n";
}
