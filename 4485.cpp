#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue<int>
#define pql priority_queue<int, vector<int>, greater<> >
#define pii pair<int,int>
#define pll pair<ll,ll>

const int INF=1e9;
int N;
int A[126][126];
int dist[126][126];
int d[4][2]={{1,0},{-1,0},{0,-1},{0,1}};

void init(void){
    for(int i=0;i<126;++i){
        for(int j=0;j<126;++j){
            dist[i][j]=INF;
        }
    }
}

void dijkstra(int cost){
    priority_queue<pair<int,pii>, vector<pair<int,pii>>, greater<pair<int,pii>>> q;
    dist[0][0]=cost;
    q.push({cost,{0,0}});

    while(!q.empty()){
        auto cur=q.top();
        int cost=cur.first, x=cur.second.first, y=cur.second.second;
        q.pop();
        for(int i=0;i<4;++i){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(nx<0 or ny<0 or nx>=N or ny>=N) continue;
            if(dist[nx][ny]>cost+A[nx][ny]){
                dist[nx][ny]=cost+A[nx][ny];
                q.push({dist[nx][ny],{nx,ny}});
            }
        }
    }
}

int main(void){
    fast;
    for(int t=1;;t++){
        cin>>N; if(!N) return 0;
        memset(A,0,sizeof(A));
        init();
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                cin>>A[i][j];
            }
        }
        dijkstra(A[0][0]);
        cout<<"Problem "<<t<<": "<<dist[N-1][N-1]<<"\n";
    }
}
