#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

const int MAX=101, INF=1e9+7;
int N,M;
int A[MAX][MAX];

int main(void){
    fast;
    cin>>N>>M;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(i!=j) A[i][j]=INF;
        }
    }
    for(int i=0;i<M;++i){
        int a,b,c; cin>>a>>b>>c;
        A[a][b]=min(A[a][b], c);
    }
    for(int i=1;i<=N;++i) A[i][i]=0;
    for(int k=1;k<=N;++k){
        for(int i=1;i<=N;++i){
            for(int j=1;j<=N;++j){
                A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
            }
        }
    }

    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(A[i][j]==INF) cout<<"0 ";
            else cout<<A[i][j]<<' ';
        }
        cout<<'\n';
    }
}
