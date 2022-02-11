#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

long long N,L;
long long pSum[202020];
vector<long long> A;

int main(void){
    cin>>N>>L;
    memset(pSum, 0, sizeof(pSum));
    A.resize(N);
    for(int i=0;i<N;++i) {
        cin>>A[i];
        if(i==0) pSum[i]=A[i];
        else pSum[i]=pSum[i-1]+A[i];
    }

    for(int i=0; i<N-1;++i){
        long long l=A[i]-L, r=A[i]+L;
        double mid = (double)(pSum[N-1]-pSum[i])/(double)(N-1-i);
        if(mid<=l or mid>=r){
            cout<<"unstable"; return 0;
        }
    }
    cout<<"stable";
}
