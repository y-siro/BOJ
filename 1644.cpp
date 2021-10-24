#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 1644 : two pointer, prime_num, Sieve of Eratosthenes

int N,cnt=0,high=0,low=0,sum=0;
vi v;
vector<bool> check;

int main(void){
    fast;
    cin>>N;
    check.resize(N+1, true);
    for(int i=2;i*i<=N;++i){
        if(check[i]) for(int j=2*i;j<=N;j+=i) check[j]=false;
    }

    for(int i=2;i<N+1;++i) if(check[i]==true) v.pb(i);
    while(true){
        if(sum>=N) sum-=v[low++];
        else if(high==v.size()) break;
        else sum+=v[high++];

        if(sum==N) cnt++;
    }

    cout << cnt;
    return 0;
}
