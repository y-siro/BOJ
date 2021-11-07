#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 17354 DVD - 수학, 정수론

ll w,h,W,H,x,y,dx,dy,idx;

int main(void){
    cin>>w>>h>>W>>H>>x>>y>>dx>>dy;
    if(dx<0) x=W-w-x;
    if(dy<0) y=H-h-y;
    W-=w;
    H-=h;
    for(int i=0;i<1000000;++i){
        idx=W-x+i*W;
        if((y+idx)%H==0){
            cout << idx; return 0;
        }
    }
    cout<<-1;
}
