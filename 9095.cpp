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
int n,val;
int d[11];

int dp(int n){
	d[0]=1;
	d[1]=1;
	d[2]=2;
	d[3]=4;
	for(int i=4;i<=n;++i){
		d[i] = d[i-1]+d[i-2]+d[i-3];
		d[n] = d[i];
	}	
	return d[n];
}
	

int main(void){
	fast;	
	cin>>n;	
	for(int i=0;i<n;++i){
		cin>>val;
		cout<<dp(val)<<endl;
	}
	
	return 0;
}
