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
#define endl "\n"
typedef long long ll;
ll N,val, ans=0;
vi v;
int main(void){
	cin>>N;
	while(N--){
		cin>>val;
		v.pb(val);
	}	
	srt(v);
	
	for(int i=1;i<=v.size();i++) ans+=abs(i-v[i-1]);
	cout << ans << endl;
	
	return 0;
}
	
