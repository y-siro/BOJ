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
typedef long long int ll;

// 2309 일곱 난쟁이 - 브루트포스 알고리즘, 정렬

int main(void) {
	fast;
	int arr[10];
	for (int i = 0; i < 9; ++i) cin >> arr[i];
	sort(arr, arr + 9);
	int sum = 0; 
	for (int i = 0; i < 9; ++i) sum += arr[i];
	int idx_1, idx_2;
	for (int i = 0; i < 9; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			if (sum - (arr[i] + arr[j]) == 100) {
				idx_1 = i; idx_2 = j;
				for (int l = 0; l < 9; ++l) {
					if (l == idx_1 or l == idx_2) continue;
					cout << arr[l]<<"\n";
				}
				return 0;
			}
		}
	}
}
