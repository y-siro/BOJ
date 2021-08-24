#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool c(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main(void) {
	int t; // test case
	cin >> t;

	while (t--) {
		int n; // srt loop num
		cin >> n;

		vector<pair<int, int>> v;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end(), c); // 서류 성적 높은 순으로 정렬
		int min = v[0].second, ans = n; // 면접 성적 최소값으로 체크 
		for (int i = 0; i < n - 1; i++) {
			if (min < v[i + 1].second) { // 만약 면접 성적도 아랫사람이 더 낮다면
				ans--;
			}
			else {
				min = v[i + 1].second; // 최소값 변경
			}
		}

		cout << ans << "\n";
	}
}
