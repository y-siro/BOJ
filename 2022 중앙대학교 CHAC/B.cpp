#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

int N;
queue<int> ls, rs, ret;

int main(void){
    fast;
    cin>>N;
    ret.push(-1);
    for(int i=0;i<26;++i) ret.push(1);
    while(N--){
        int cnt=0;
        for(int i=0;i<13;++i) {
            ls.push(ret.front()); ret.pop();
        }
        for(int i=0;i<14;++i){
            rs.push(ret.front()); ret.pop();
        }
        bool flag=true;
        while(cnt<27){
            int card; cin>>card;
            cnt+=card;
            for(int i=0;i<card;++i){
                if(flag){
                    ret.push(rs.front()); rs.pop();
                } else{
                    ret.push(ls.front()); ls.pop();
                }
            }
            flag=!flag;
        }
    }
    for(int i=1;i<=27;++i){
        int cur=ret.front(); ret.pop();
        if(cur==-1){
            cout<<i; return 0;
        }
    }
}
