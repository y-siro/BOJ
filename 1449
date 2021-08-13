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
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long int ll;

int main(void){
	fast;
	int N, L; cin>>N>>L; 
	int cnt=0;
	vi v;
	bool check[1001];
	memset(check,false,sizeof(check));
		
	while(N--){
		int val;
		cin>>val;
		v.pb(val);
	}	
	srt(v);
	
	for(int i=0;i<v.size();i++){
		if(!check[v[i]]){
			for(int j=v[i];j<min(v[i]+L,1001);j++){
				check[j]=true;
			}
			cnt++;
		}
	}	
	cout << cnt;
	
	return 0;
}
