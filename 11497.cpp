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
int T,N;
int main(void){
	fast;
	cin>>T;
	
	vi v[T];
	for(int j=0;j<T;j++){
		cin>>N;
		for(int i=0;i<N;i++){
			int val; cin>>val;
			v[j].pb(val);
		}		
		sort(v[j].begin(),v[j].end());
		
		int cnt=0;
		for(int i=0;i<v[j].size()-2;i++){
			cnt=max(cnt,abs(v[j][i]-v[j][i+2]));
		}
		
		cout<<cnt<<endl;
	}	
	return 0;
}	
