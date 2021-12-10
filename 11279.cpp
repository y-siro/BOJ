#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

// 11279 최대 힙 - 자료 구조, 우선순위 큐

int N;
priority_queue<int> pq;

int main(void){
    fast;
    cin>>N;
    while(N--){
        int num; cin>>num;
        if(num==0){
            if(pq.empty()) cout<<0<<"\n";
            else{
                cout<<pq.top()<<"\n"; pq.pop();
            }
        }
        else pq.push(num);
    }
}
