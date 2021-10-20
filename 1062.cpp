#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 1062 가르침 : bitmasking, brute-force, back-tracking

int n,k,ans;
string str;
vector<string> v;
bool c[26];
bool flag;

void check(){
    int result =0;
    for(int i=0;i<n;++i){
        flag=false;
        for(int j=0;j<v[i].size();++j){
            if(!c[v[i][j]-97]){
                flag=true;
                break;
            }
        }
        if(!flag) result++;
    }

    ans=max(ans,result);
    return;
}

void Learn(int alp, int learn){
    if(k==learn){
        check();
        return;
    }
    else{
        for(int i=alp;i<26;++i){
            if(!c[i]){
                c[i]=true;
                Learn(i,learn+1);
                c[i]=false;
            }
        }
    }
}

int main(void){
    cin>>n>>k;
    if(k<5) {
        cout << "0";
        return 0;
    }
    if(k>25){
        cout << n;
        return 0;
    }

    c['a'-97]=true;
    c['n'-97]=true;
    c['t'-97]=true;
    c['i'-97]=true;
    c['c'-97]=true;
    k-=5;

    for(int i=0;i<n;++i){
        cin>>str;
        int len = str.length();
        str=str.substr(4,len-8);
        v.pb(str);
    }
    Learn(0,0);
    cout<<ans;

    return 0;
}
