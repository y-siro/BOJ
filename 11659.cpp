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
int N,M,val,a,b;


int main(void){
	fast;
	cin>>N>>M;
	vi v(N+1);
	
	for(int i=1;i<=N;++i){
		cin>>val;
		v[i] = v[i-1]+val;
	}
	
	for(int i=0;i<M;++i){
		cin>>a>>b;
		if(a==0) cout << v[b]<<endl;
		else cout << v[b] - v[a-1] << endl;
	}
		
	return 0;
}
