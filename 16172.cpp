#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 16172 나는 친구가 적다 (Large) - string, kmp

// using kmp

string s,k,v;
vi ans;

vi get_pi(string str){
    int m=(int)str.size(), j=0;
    vi pi(m,0);
    for(int i=1;i<m;++i){
        while(j>0&&str[i]!=str[j]) j=pi[--j];
        if(str[i]==str[j]) pi[i]=++j;
    }
    return pi;
}

vi kmp(string s, string k){
    vi ans;
    vi pi=get_pi(k);
    int n=(int)s.size(), m=(int)k.size(), j=0;
    for(int i=0;i<n;++i){
        while(j>0&&s[i]!=k[j]) j=pi[--j];
        if(s[i]==k[j]){
            if(j+1==m){
                ans.pb(i-j);
                j=pi[j];
            }
            else j++;
        }
    }

    return ans;
}


int main(void){
    fast;
    cin>>s>>k;
    for(int i=0;i<s.size();++i){
        if(isalpha(s[i])) v.pb(s[i]);
    }

    ans=kmp(v,k);
    if(ans.size()) cout<<1;
    else cout<<0;
    return 0;
}

  
// using find method

string s,k,v;

int main(void){
    fast;
    cin>>s>>k;
    for(int i=0;i<s.size();++i){
        if(isalpha(s[i])) v.pb(s[i]);
    }

    if(v.find(k)!=string::npos) cout << 1;
    else cout<<0;

    return 0;
}


