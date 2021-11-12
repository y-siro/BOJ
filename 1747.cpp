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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
typedef long long int ll;

// 1747 소수&팰린드롬 - 수학, 브루트포스 알고리즘, 정수론, 소수 판정, 에라토스테네스의 체

bool d[1111111];

bool is_pelin(int num){
    string s=to_string(num);
    for(int i=0;i<s.size()/2;++i){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}

int main(void){
    fast;
    memset(d,true,sizeof(d));
    d[1]=false;
    for(int i=2;i*i<1111111;++i){
        if(d[i]==false) continue;
        for(int j=2*i;j<1111111;j+=i) d[j]=false;
    }

    int N; cin>>N;
    for(;;N++){
        if(d[N] and is_pelin(N)){
            cout<<N; return 0;
        }
    }
}
