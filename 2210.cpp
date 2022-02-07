#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

int ret=0;
char A[5][5];
bool visited[1010101];
int d[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int x, int y, int len, string s){
    if(len==6){
        visited[stoi(s)]=true; return;
    }
    s+=A[x][y];

    for(int i=0;i<4;++i){
        int nx=x+d[i][0], ny=y+d[i][1];
        if(nx<0 or ny<0 or nx>=5 or ny>=5) continue;
        dfs(nx,ny,len+1,s);
    }
}

int main(void){
    fast;
    memset(visited,0,sizeof(visited));
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            cin>>A[i][j];
        }
    }

    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            dfs(i,j,0,"");
        }
    }

    for(int i=0;i<1010101;++i){
        if(visited[i]) ret++;
    }
    cout<<ret;
}
