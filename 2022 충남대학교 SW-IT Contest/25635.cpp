#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    long long s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end());

    if(s-a.back()+1>=a.back()) {
        cout << s << '\n';
        return 0;
    } else {
        long long x = s - a.back();
        cout << x * 2 + 1 << '\n';
        return 0;
    }
}
