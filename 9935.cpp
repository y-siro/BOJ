#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

string str, ban,ans;
int cnt = 0;
int main(void) {
	fast;
	cin >> str >> ban;		
	for (int i = 0; i < str.length(); ++i) {
		ans += str[i];
		if (ans[ans.length() - 1] == ban[ban.length() - 1]) {
			if (ans.length() >= ban.length()) {
				cnt = 1;
				for (int j = ban.length() - 2; j >= 0; --j) {
					if (ans[ans.length() - 1 - (ban.length() - j - 1)] != ban[j]) break;
					cnt++;
				}

				if (cnt == ban.length()) {
					for (int l = 0; l < ban.length(); ++l) ans.pop_back();
				}
			}
		}
	}

	if (ans.empty()) cout << "FRULA";
	else cout << ans;
	return 0;
}
	
