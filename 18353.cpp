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
int d[2020];

int main(void){
    fast;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;++i) cin>>A[i];
    reverse(A.begin(),A.end());

    for(int i=0;i<N;++i){
        d[i]=1;
        for(int j=0;j<i;++j){
            if(A[i]>A[j]) d[i]=max(d[i],d[j]+1);
        }
    }
    int mm=0;
    for(int i=0;i<N;++i) mm=max(mm,d[i]);
    cout<<N-mm;
}
