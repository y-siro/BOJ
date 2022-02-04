#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue<int>
#define pql priority_queue<int, vector<int>, greater<> >
#define pii pair<int,int>
#define pll pair<ll,ll>

int main(void){
    int N,cnt=0; cin>>N;
    bitset<32> A(N);
    bitset<32> B(INT_MAX-N+1);
    for(int i=0;i<31;++i){
        if(A[i]!=B[i]) cnt++;
    }
    cout<<cnt+1;
}
