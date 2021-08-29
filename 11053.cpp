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

const int M=1001;
int d[M], dd[M];
int N,m=0;
int main(void){
	fast;
	cin>>N;
	for(int i=0;i<N;++i){
		cin>>dd[i];
	}
	
	for(int i=0;i<N;++i){
		d[i]=1;
		for(int j=0;j<i;++j){
			if(dd[i]>dd[j]&&d[i]<d[j]+1) d[i]++;
		}
		if(m<d[i]) m=d[i];
	}
	cout<<m;
	return 0;
}
