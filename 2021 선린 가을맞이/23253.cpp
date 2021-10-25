#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 23253 자료구조는 정말 최고야 - Greedy

int N,M,k,cur,pre;
bool flag = true;
int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<M;++i){
        cin>>k; pre=N+1;
        for(int j=0;j<k;++j){
            cin>>cur;
            if(cur>pre){
                flag=false;
                break;
            }
            pre=cur;
        }
        if(!pre) break;
    }

    if(flag) cout<<"Yes";
    else cout<<"No";
    return 0;
}
