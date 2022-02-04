#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue<int>
#define pql priority_queue<int, vector<int>, greater<> >
#define pii pair<int,int>
#define pll pair<ll,ll>

string tt;
int M,S;
int main(void){
    fast;
    cin>>tt;
    M=stoi(tt.substr(0,2)); S=stoi(tt.substr(3,2));
    S+=M*60;
    if(!S){
        cout<<0; return 0;
    }
    if(S<30){
        cout<<(S/10)+1; return 0;
    }
    if(S<60){
        cout<<((S-30)/10)+1; return 0;
    }
    int A=S;
    int ss, sm=1;
    S-=30; ss=1;
    ss+=S/600; S%=600;
    ss+=S/60; S%=60;
    ss+=S/30; S%=30;
    ss+=S/10;

    sm+=A/600; A%=600;
    sm+=A/60; A%=60;
    sm+=A/30; A%=30;
    sm+=A/10;
    cout<<min(ss,sm);
}
