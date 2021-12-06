#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

// 7662 이중 우선순위 큐 - 자료 구조, 트리를 사용한 집합과 맵, 우선순위 큐
// Multiset

int T, N;
multiset<int> ms;

int main(void){
    fast;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;++i){
            char cmd; int num;
            cin>>cmd>>num;
            if(cmd=='I') ms.insert(num);
            else{
                if(!ms.empty()){
                    if(num==-1) ms.erase(ms.begin());
                    if(num==1) {
                        auto iter=ms.end();
                        ms.erase(--iter);
                    }
                }
            }
        }

        if(ms.empty()) cout<<"EMPTY"<<"\n";
        else {
            auto iter=ms.end();
            cout<<*(--iter)<<" "<<*ms.begin()<<"\n";
        }
        ms.clear();
    }
}
