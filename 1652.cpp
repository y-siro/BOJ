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

// 1652 누울 자리를 찾아라 - 구현, 문자열

int main(void){
    fast;
    int N; cin>>N;
    vc<string> v;
    for(int i=0;i<N;++i){
        string s; cin>>s;
        v.pb(s);
    }
    int cnt=0, ans=0;
    for(int i=0;i<N;++i){
        cnt=0;
        for(int j=0;j<N;++j){
            if(v[i][j]=='.') cnt++;
            if(v[i][j]=='X') {
                if(cnt>=2) ans++;
                cnt=0;
            }
            if(j==N-1 and cnt>=2) ans++;
        }
    }
    cout<<ans<<" "; ans=0;
    for(int i=0;i<N;++i){
        cnt=0;
        for(int j=0;j<N;++j){
            if(v[j][i]=='.') cnt++;
            if(v[j][i]=='X'){
                if(cnt>=2) ans++;
                cnt=0;
            }
            if(j==N-1 and cnt>=2) ans++;
        }
    }
    cout<<ans;
}
