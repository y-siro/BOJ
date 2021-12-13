#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>

// 23738 Ресторан

int main(void){
    fast;
    string s, ans=""; cin>>s;
    for(int i=0;i<s.size();++i){
        if(s[i]=='A') ans+="a";
        else if(s[i]=='B') ans+="v";
        else if(s[i]=='E') ans+="ye";
        else if(s[i]=='K') ans+="k";
        else if(s[i]=='M') ans+="m";
        else if(s[i]=='H') ans+="n";
        else if(s[i]=='O') ans+="o";
        else if(s[i]=='P') ans+="r";
        else if(s[i]=='C') ans+="s";
        else if(s[i]=='T') ans+="t";
        else if(s[i]=='Y') ans+="u";
        else ans+="h";
    }
    cout<<ans;
}
