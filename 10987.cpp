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
#define F first
#define S second

// 10987 모음의 개수 - 구현, 문자열

int main(void){
    fast;
    string s; cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') cnt++;
    }
    cout<<cnt;
}
