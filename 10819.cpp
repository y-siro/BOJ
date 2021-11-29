#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 10819 차이를 최대로 - 브루트포스 알고리즘, 백트레킹

vector<int> v,arr;
int N,ans=-1;
bool visited[11];

int cal(void){
    int ret=0;
    for(int i=0;i<=N-2;++i) ret+=abs(arr[i]-arr[i+1]);
    return ret;
}

void dfs(int depth){
    if(depth==N){
        ans=max(ans,cal()); return;
    }
    for(int i=0;i<N;++i){
        if(!visited[i]){
            arr.push_back(v[i]);
            visited[i]=true;
            dfs(depth+1);
            arr.pop_back();
            visited[i]=false;
        }
    }
}

int main(void){
    fast;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;++i) cin>>v[i];
    dfs(0);
    cout<<ans;
}
