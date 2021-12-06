#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

// 11652 카드 - 자료 구조, 정렬, 트리를 사용한 집합과 맵

ll N,cnt=1,mv=0,ans=0;

int main(void){
    fast;
    cin>>N;
    vector<ll> v;
    v.resize(N);
    for(int i=0;i<N;++i) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<N-1;++i){
        if(v[i]==v[i+1]){
            cnt++;
            if(cnt>mv){
                mv=cnt;
                ans=i;
            }
        }
        else cnt=1;
    }
    cout<<v[ans];
}
