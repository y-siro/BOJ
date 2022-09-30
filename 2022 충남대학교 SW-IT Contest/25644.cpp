#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int x = (int) 1e9 + 7;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        x = min(x, a[i]);
        ans=max(ans, a[i]-x);
    }
    cout << ans << '\n';
    return 0;
}
