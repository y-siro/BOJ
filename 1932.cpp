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
int n;
int triangle[501][501], cache[501][501];

int path(int y,int x){
	if(y==n-1) return triangle[y][x];
	int &ret = cache[y][x];
	if(ret!=-1) return ret;
	return ret = max(path(y+1,x),path(y+1,x+1))+triangle[y][x];
}

int main(void){
	fast;
	cin>>n;
	for(int i=0;i<n;++i){
		for(int j=0;j<i+1;++j){
			cin>>triangle[i][j];
		}
	}
	
	memset(cache,-1,sizeof(cache));
	cout<<path(0,0)<<endl;
	
	return 0;
}
