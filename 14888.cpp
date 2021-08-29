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

int N,val,maxv=INT_MIN,minv=INT_MAX;
vi v(12);
vi op(4);	
void dfs(int a,int b,int c,int d, int cnt, int sum){
	if(cnt==N){
		maxv=max(maxv,sum);
		minv=min(minv,sum);
	}
	
	if(a>0) dfs(a-1,b,c,d,cnt+1,sum+v[cnt]);
	if(b>0) dfs(a,b-1,c,d,cnt+1,sum-v[cnt]);
	if(c>0) dfs(a,b,c-1,d,cnt+1,sum*v[cnt]);
	if(d>0) dfs(a,b,c,d-1,cnt+1,sum/v[cnt]);
}
int main() {	
	cin >> N;	
	for(int i=0;i<N;++i) cin>>v[i];		
	for(int i=0;i<4;++i) cin>>op[i];
	dfs(op[0],op[1],op[2],op[3],1,v[0]);
	
	cout<<maxv << endl << minv;
	return 0;	
}
