#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 1927 최소 힙 : priority queue

int n, num;
priority_queue<int,vi,greater<int>> pq;
int main(void){
    fast;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>num;
        if(num) pq.push(num);
        else if(!num) {
            if(pq.empty()) cout << "0" << endl;
            else {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }

    return 0;
}
