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
int N,d,w,cnt,idx=0,V=0,sum=0;
vector<pair<int,int>> v;
bool comp(pair<int,int> a, pair<int,int> b){
	if(a.F==b.F) return a.S>b.S;
	return a.F>b.F;
}
		
int main(void){
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>d>>w;
		v.pb(mp(d,w));
	}	
	sort(all(v),comp);
	
	cnt=v[0].F;
	while(cnt){		
		for(int i=0;i<N;i++){
			if(cnt<=v[i].F){
				if(V<v[i].S){
					V=v[i].S;
					idx=i;
				}
			}
			else break;
		}
		if(idx!=-1){
			sum+=V;
			v[idx].S=0;
		}
		V=0; idx=0;
		cnt--;
	}
	
	cout << sum << endl;
	return 0;
}
