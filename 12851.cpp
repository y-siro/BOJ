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

// 12851 숨바꼭질2

int N,K,ans,ac=0;
bool visited[101010];
queue<pii> q;

void bfs(int x){
    visited[x]=true;
    q.push({x,0});
    while(!q.empty()){
        int x=q.front().first, cnt=q.front().second;
        q.pop();
        visited[x]=true;
        if(x==K and ac){
            if(cnt==ans) ac++;
        }
        if(x==K and !ac){
            ans=cnt; ac++;
        }


        for(int i=0;i<3;++i){
            if(i==0) {
                int nx=x-1;
                if(nx>=0 and !visited[nx]){
                    q.push({nx,cnt+1});
                }
            }
            else if(i==1) {
                int nx=x+1;
                if(nx<101010 and !visited[nx]){
                    q.push({nx,cnt+1});
                }
            }
            else {
                int nx=x*2;
                if(nx<101010 and !visited[nx]){
                    q.push({nx,cnt+1});
                }
            }


        }
    }
    cout<<ans<<"\n"<<ac;
}

int main(void){
    fast;
    memset(visited,false,sizeof(visited));
    cin>>N>>K;
    bfs(N);
}
