#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// 12015 가장 긴 증가하는 부분 수열 2 - 이분 탐색

int N,num;
vector<int> v;
int main() {
    cin >> N;
    for (int i=0;i<N;++i) {
        cin >> num;
        auto it = lower_bound(v.begin(), v.end(), num);
        if (it!=v.end()) *it=num;
        else v.push_back(num);
    }
    cout << v.size();
}
