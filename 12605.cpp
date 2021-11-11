#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define vc vector
#define vi vector<int>
#define vl vector<ll>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
typedef long long int ll;

// 12605 단어순서 뒤집기 - 구현, 자료 구조, 문자열, 스택

string tros(string s){
    vector<string> v;
    string str,idx;
    for(int i=0;i<s.size();++i){
        idx+=s[i];
        if(s[i]==' ' or i==s.size()-1){
            v.pb(idx);
            idx="";
        }
    }
    for(int i=v.size()-1;i>=0;--i){
        str+=v[i];
        if(i==v.size()-1) str+=" ";
    }
    return str;
}

int main(void){
    fast;
    int N; cin>>N;
    cin.ignore();
    for(int i=1;i<=N;++i){
        string str; getline(cin,str);
        cout << "Case #"<<i<<": "<<tros(str)<<"\n";
    }
}
