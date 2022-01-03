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
    int N; cin>>N;
    while(N--){
        string s; int d,a,b;
        cin>>s>>d>>a>>b;
        string ans=""; bool flag;
        if(s=="ADD" or s=="ADDC") ans+="0000";
        if(s=="SUB" or s=="SUBC") ans+="0001";
        if(s=="MOV" or s=="MOVC") ans+="0010";
        if(s=="AND" or s=="ANDC") ans+="0011";
        if(s=="OR" or s=="ORC") ans+="0100";
        if(s=="NOT") ans+="0101";
        if(s=="MULT" or s=="MULTC") ans+="0110";
        if(s=="LSFTL" or s=="LSFTLC") ans+="0111";
        if(s=="LSFTR" or s=="LSFTRC") ans+="1000";
        if(s=="ASFTR" or s=="ASFTRC") ans+="1001";
        if(s=="RL" or s=="RLC") ans+="1010";
        if(s=="RR" or s=="RRC") ans+="1011";
        if(s.back()=='C') ans+="1"; // flag가 true일 시, 상수 #C를 사용
        else ans+="0";

        if(s.back()=='C') flag=true;
        else flag=false;

        ans+="0";

        if(d==0) ans+="000";
        if(d==1) ans+="001";
        if(d==2) ans+="010";
        if(d==3) ans+="011";
        if(d==4) ans+="100";
        if(d==5) ans+="101";
        if(d==6) ans+="110";
        if(d==7) ans+="111";

        if(a==0) ans+="000";
        if(a==1) ans+="001";
        if(a==2) ans+="010";
        if(a==3) ans+="011";
        if(a==4) ans+="100";
        if(a==5) ans+="101";
        if(a==6) ans+="110";
        if(a==7) ans+="111";

        if(!flag){
            if(b==0) ans+="000";
            if(b==1) ans+="001";
            if(b==2) ans+="010";
            if(b==3) ans+="011";
            if(b==4) ans+="100";
            if(b==5) ans+="101";
            if(b==6) ans+="110";
            if(b==7) ans+="111";
            ans+="0";
        }
        else{
            if(b==0) ans+="0000";
            if(b==1) ans+="0001";
            if(b==2) ans+="0010";
            if(b==3) ans+="0011";
            if(b==4) ans+="0100";
            if(b==5) ans+="0101";
            if(b==6) ans+="0110";
            if(b==7) ans+="0111";
            if(b==8) ans+="1000";
            if(b==9) ans+="1001";
            if(b==10) ans+="1010";
            if(b==11) ans+="1011";
            if(b==12) ans+="1100";
            if(b==13) ans+="1101";
            if(b==14) ans+="1110";
            if(b==15) ans+="1111";
        }
        cout<<ans<<"\n";
    }
}
