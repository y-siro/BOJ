#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

int N, M, s, e, cost;
vector<pii> v[1001];
bool visited[1001];
int dist[1001];
priority_queue<pii,vector<pii>,greater<pii>> q;

int main(void){
    fast;

    cin>>N>>M;
    for(int i=1;i<=N;++i) dist[i]=100001;
    for(int i=0;i<M;++i){
        cin>>s>>e>>cost;
        v[s].pb(mp(e,cost));
    }
    cin>>s>>e;
    dist[s]=0;
    q.push(mp(0,s));
    while(!q.empty()){
        int node = q.top().second;
        q.pop();
        if(!visited[node]){
            visited[node]=true;
            for(int i=0;i<v[node].size();++i){
                int next=v[node][i].first;
                if(dist[next]>dist[node]+v[node][i].second){
                    dist[next]=dist[node]+v[node][i].second;
                    q.push(mp(dist[next],next));
                }
            }
        }
    }

    cout << dist[e];
    return 0;
}
