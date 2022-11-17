#include <iostream>
#include <vector>
using namespace std;

const int MM=1111111;
vector<bool> prime(MM, true);
vector<int> prime_list;

void sieve() {
    prime[1] = false;
    for (int i = 2; i * i <= MM; ++i) {
        if (!prime[i]) continue;
        prime_list.push_back(i);
        for (int j = i + i; j <= MM; j += i) {
            prime[j] = false;
        }
    }
}

int find_min(int x) {
    for (int i = 0; i < prime_list.size(); ++i) {
        if (x % prime_list[i] == 0) return prime_list[i];
    }
}

int main(void) {
    sieve();
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            ans += i;
            continue;
        }
        ans += find_min(i);
    }

    cout<<ans<<'\n';
    return 0;
}
