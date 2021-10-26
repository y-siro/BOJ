#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
// boj 22965 K개의 부분 배열 - 정렬, 애드 혹

int N,cnt=1;
int main(void){
    fast;
    cin>>N;
    vector<int> v(N,0);
    for(int i=0;i<N;++i) cin>>v[i];
    for(int i=0;i<N-1;++i) if(v[i]>v[i+1]) cnt++;
    if(cnt>1 and v[0]<v[N-1]) cnt++;
    if(cnt<3) cout << cnt; else cout << 3;

}
