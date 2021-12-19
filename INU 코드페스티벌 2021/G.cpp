#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long

int N;
int ii=0,nn=0,uu=0;
int in=0, iu=0,nu=0;
int ctin=0, ctiu=0, ctnu=0;


int main(void){
    fast;
    cin>>N;
    for(int i=0;i<N;++i) {
        string s; int n;
        cin>>s>>n;
        if(s[0]==s[1]){
            if(s[0]=='I') ii+=n;
            else if(s[0]=='N') nn+=n;
            else uu+=n;
        }
        else{
            if((s[0]=='I' and s[1]=='N') or s[0]=='N' and s[1]=='I') {
                in+=n; ctin++;
            }
            if((s[0]=='I' and s[1]=='U') or s[0]=='U' and s[1]=='I') {
                iu+=n; ctiu++;
            }
            if((s[0]=='N' and s[1]=='U') or s[0]=='U' and s[1]=='N') {
                nu+=n; ctnu++;
            }
        }
    }
    if((ctin and ctiu and ctnu) or (ctin and ctiu and !ctnu) or (ctin and !ctiu and ctnu) or (!ctin and ctiu and ctnu)){
        cout<<ii+nn+uu+in+iu+nu; return 0;
    }

    if(ctin and !ctiu and !ctnu) {
        cout<<max(uu,ii+nn+in); return 0;
    }

    if(!ctin and ctiu and !ctnu) {
        cout<<max(nn,ii+uu+iu); return 0;
    }

    if(!ctin and !ctiu and ctnu) {
        cout<<max(ii,nn+uu+nu); return 0;
    }
    if(!ctin and !ctiu and !ctnu){
        cout<<max(ii,max(nn,uu)); return 0;
    }
}
