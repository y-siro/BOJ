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
int N,K,s;
int main(void){
	fast;
	cin>>N>>K;
	vi v;
	vi vv;
	for(int i=0;i<N;i++){
		int val;cin>>val;
		v.pb(val);
	}
	srt(v);
	for(int i=0;i<N-1;i++){
		vv.pb(v[i+1]-v[i]);
	}
	sort(vv.begin(),vv.end());
	for(int i=0;i<N-K;i++) s+=vv[i];
	cout<<s<<endl;
	return 0;	
}	
