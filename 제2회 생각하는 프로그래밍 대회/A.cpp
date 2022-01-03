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
    int x,y,z;
    char a,b;
    cin>>x>>a>>y>>b>>z;

    int ret;
    if(a=='+') ret=x+y;
    if(a=='-') ret=x-y;
    if(a=='*') ret=x*y;
    if(a=='/') ret=x/y;

    if(b=='+') ret+=z;
    if(b=='-') ret-=z;
    if(b=='*') ret*=z;
    if(b=='/') ret/=z;
    int s1=ret;

    int rret;
    if(b=='+') rret=y+z;
    if(b=='-') rret=y-z;
    if(b=='*') rret=y*z;
    if(b=='/') rret=y/z;

    if(a=='+') rret=x+rret;
    if(a=='-') rret=x-rret;
    if(a=='*') rret=x*rret;
    if(a=='/') rret=x/rret;
    if(s1>rret) cout<<rret<<"\n"<<s1;
    else cout<<s1<<"\n"<<rret;
}
