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
ll N;
int main(void){
	fast;
	cin>>N;
	vi v;
	for(int i=0;i<6;i++){
		ll val; cin>>val;
		v.pb(val);
	}
  
	ll sum=0;
	if(N>1){ // 주사위 맞은편끼리 비교하여 최소값 산출
		v[0]=min(v[0],v[5]);
		v[1]=min(v[1],v[4]);
		v[2]=min(v[2],v[3]);
		sort(v.begin(),v.begin()+3);
		// 산출된 값들끼리 보여지는 면의 수만큼 더하기
		sum+=v[0]*(N*N) + v[0] * ((N-1)*(N-1)*4);
		sum+=v[1]*(8*(N-1));
		sum+=v[2]*4;
	}
	else{
		for(int i=0;i<v.size()-1;i++){
			srt(v);
			sum+=v[i];
		}
	}	
	
	cout<<sum<<endl;
}	
