#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

int N;

int main(void){
    fast;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;++i) cin>>A[i];

    vector<int> d(N);
    for(int i=0;i<N;++i){
        d[i]=1;
        for(int j=0;j<i;++j){
            if(A[i]>A[j]) d[i]=max(d[i],d[j]+1);
        }
    }
    int ret=0;
    for(int i=0;i<N;++i) ret=max(ret,d[i]);
    cout<<ret;
}
