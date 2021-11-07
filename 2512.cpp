#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// 2512 예산 - 이분 탐색, 매개 변수 탐색

ll N,M,sum=0,l=0,r=0,mid=0;
ll d[11111];

bool check(int mid){
    sum=0;
    for(int i=0;i<N;++i){
        if(d[i]<=mid) sum+=d[i];
        else sum+=mid;
    }
    if(sum<=M) return true;
    else return false;
}

int bs(){
    while(l<=r){
        mid=(l+r)/2;
        if(check(mid)) l=mid+1;
        else r=mid-1;
    }
    return r;
}

int main(void){
    fast;
    cin>>N;
    for(int i=0;i<N;++i){
        cin>>d[i];
        r = max(r,d[i]);
    }
    cin>>M;
    cout<<bs();
}
