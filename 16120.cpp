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



int main(void){
    fast;
    string s; cin>>s;
    int r=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='P'){
            r++; continue;
        }

        if(r>=2 and s[i+1]=='P'){
            r--; i++;
        }
        else{
            cout<<"NP"<<"\n"; return 0;
        }
    }

    if(r==1) cout<<"PPAP"<<"\n";
    else cout<<"NP"<<"\n";
}
