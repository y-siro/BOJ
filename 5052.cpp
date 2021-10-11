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

int t, n;

struct trie {
	trie* next[10];
	bool finish;
	bool nextchild;
	trie() {
		fill(next, next + 10, nullptr);
		finish = nextchild = false;
	}
	~trie() {
		for (int i = 0; i < 10; ++i) {
			if (next[i]) delete next[i];
		}
	}
	void insert(char* key) {
		if (*key == '\0') finish = true;
		else {
			int now = *key - '0';
			if (next[now] == NULL) next[now] = new trie();
			nextchild = true;
			next[now]->insert(key + 1);
		}
	}
	bool find(char* key) {
		if (*key == '\0') return 0;
		if (finish) return 1;
		int now = *key - '0';
		return next[now]->find(key + 1);
	}
};

int main(void) {
	fast;
	cin >> t;
	while (t--) {
		cin >> n;
		char arr[10001][11];
		trie* root = new trie();
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
			root->insert(arr[i]);
		}
		bool check = false;
		for (int i = 0; i < n; ++i) {
			if (root->find(arr[i])) check = true;
		}
		check ? cout << "NO\n" : cout << "YES\n";
		delete root;
	}

	return 0;
}
