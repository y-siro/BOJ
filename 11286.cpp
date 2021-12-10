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

// 11286 절댓값 힙 - 자료 구조, 우선순위 큐

int N;
priority_queue<pii, vector<pii>,greater<pii>> q1;

int main(void){
    fast;
    cin>>N;
    while(N--){
        int num; cin>>num;
        if(num<0) q1.push({abs(num),-1});
        else if(num>0) q1.push({abs(num),1});
        else if(num==0){
            if(q1.empty()) {
                cout<<0<<"\n"; continue;
            }
            if(q1.top().second<0){
                cout<<(-1)*q1.top().first<<"\n"; q1.pop();
            }
            else {
                cout<<q1.top().first<<"\n"; q1.pop();
            }
        }
    }
}
