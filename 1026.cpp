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
	int N; cin >> N;
	
	int val;
	vi v;
	vi vv;
	for(int i=0;i<N;i++){
		cin>>val;
		v.pb(val);
	}
	
	for(int i=0;i<N;i++){
		cin>>val;
		vv.pb(val);
	}
	
	srt(v); // A 배열 오름차순 정렬
	sort(vv.begin(),vv.end(),greater<int>()); // B 배열 내림차순 정렬
	
	int sum=0;
	for(int i=0;i<N;i++){
		sum+=v[i]*vv[i];
	}
	
	cout << sum;
	
	return 0;
}
