#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 15889 호 안에 수류탄이야!! - 정렬, 스위핑

int N,idx=0;
int a[33333], b[33333];

int main(void){
    fast;
    cin>>N;
    for(int i=0;i<N;++i) cin>>a[i];
    for(int i=1;i<N;++i) cin>>b[i];
    for(int i=0;i<N;++i){
        if(a[i]>idx){
            cout<<"엄마 나 전역 늦어질 것 같아";
            return 0;
        }
        else idx=max(idx,a[i]+b[i+1]);
    }
    cout << "권병장님, 중대장님이 찾으십니다";
}
