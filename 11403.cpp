#include <bits/stdc++.h>
using namespace std;

// 11403 경로 찾기 - 그래프 이론, 플로이드-와샬

const int INF=1111;
int N, m[111][111];

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
    cin>>N;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            cin>>m[i][j];
            if(!m[i][j]) m[i][j]=INF;
        }
    }

    for(int k=1;k<=N;++k){
        for(int i=1;i<=N;++i){
            for(int j=1;j<=N;++j){
                m[i][j]=min(m[i][j], m[i][k]+m[k][j]);
            }
        }
    }

    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(m[i][j]==INF) cout<<0<<" ";
            else cout<<1<<" ";
        }
        cout<<"\n";
    }
}
