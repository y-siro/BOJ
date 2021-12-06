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

// 14562 태권왕 - BFS, 백트래킹

int c,x,y;
queue<pair<pii,int>> q;

int bfs(int s, int t){
    int cnt=0;
    q.push(mp(mp(s,t),cnt));
    while(!q.empty()){
        int s=q.front().F.F, t=q.front().F.S, cnt=q.front().S;
        q.pop();

        if(s==t) return cnt;
        if(s<t){
            cnt++;
            q.push(mp(mp(s*2,t+3),cnt));
            q.push(mp(mp(s+1,t),cnt));
        }
    }
}

int main(void){
    fast;
    cin>>c;
    while(c--){
        cin>>x>>y;
        cout<<bfs(x,y)<<"\n";
        while(!q.empty()) q.pop();
    }
}
