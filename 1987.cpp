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

int R,C,mm=0, cnt=0;
vector<string> A;
int d[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
bool alp[26];

void dfs(int x, int y){
    cnt++;
    mm=max(mm,cnt);
    alp[A[x][y]-'A']=true;
    for(int i=0;i<4;++i){
        int nx=x+d[i][0], ny=y+d[i][1];
        if(nx<0 or ny<0 or nx>=R or ny>=C) continue;
        if(alp[A[nx][ny]-'A']) continue;
        alp[A[nx][ny]-'A']=true;
        dfs(nx, ny);
        alp[A[nx][ny]-'A']=false; cnt--;
    }
}

int main(void){
    fast;
    cin>>R>>C;
    for(int i=0;i<R;++i){
        string s; cin>>s;
        A.push_back(s);
    }
    dfs(0,0);
    cout<<mm;
}


