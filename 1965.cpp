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

int N;
int d[1010];

int main(void){
    fast;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;++i) {
        cin>>A[i];
        d[i]=1;
    }

    int ret=0;
    for(int i=0;i<N;++i){
        for(int j=0;j<i;++j){
            if(A[i]>A[j] and d[i]<d[j]+1) d[i]=d[j]+1;
        }
        ret=max(ret,d[i]);
    }
    cout<<ret;
}
