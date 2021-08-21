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

int N,M,val,cnt=0;
vi v, vv;

int main(void){
	fast;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>val;
		v.pb(val);
	}
	sort(v.begin(),v.end(),greater<int>());
	
	cin>>M;
	for(int i=0;i<M;i++){
		cin>>val;
		vv.pb(val);
	}	
	sort(vv.begin(),vv.end(),greater<int>());
	
	if(v[0]<vv[0]) {
			cout << "-1" << endl;
			return 0;
	}
	
	while(vv.size()!=0){
		for(int i=0;i<v.size();i++){
			for(int j=0;j<vv.size();j++){
				if(v[i]>=vv[j]){
					vv.erase(vv.begin()+j);
					break;
				}
			}
		}
		cnt++;
	}
	
	cout << cnt << endl;
	return 0;
}
