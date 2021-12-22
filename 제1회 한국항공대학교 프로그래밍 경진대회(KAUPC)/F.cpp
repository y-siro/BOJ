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

const int M=1010;
int N, mv=0;
int m[M][M],d1[M][M], d2[M][M], d3[M][M], d4[M][M],d0[M][M];
int d[M][M];


int main(void){
    fast;
    memset(d,0,sizeof(d));
    memset(d1,0,sizeof(d1)); memset(d2,0,sizeof(d2)); memset(d3,0,sizeof(d3)); memset(d4,0,sizeof(d4));
    memset(m,0,sizeof(m));
    cin>>N;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            cin>>m[i][j];
            if(m[i][j]==1) d[i][j]=m[i][j];
            d1[i][j]=d2[i][j]=d3[i][j]=d4[i][j]=d[i][j];
        }
    }


    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(m[i][j-1]==1 and m[i][j]==1){
                d1[i][j]=d1[i][j-1]+1;
                mv=max(mv,d1[i][j]);
            }
        }
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(m[i-1][j]==1 and m[i][j]==1){
                d2[i][j]=d2[i-1][j]+1;
                mv=max(mv,d2[i][j]);
            }
        }
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(m[i-1][j-1]==1 and m[i][j]==1){
                d3[i][j]=d3[i-1][j-1]+1;
                mv=max(mv,d3[i][j]);
            }
        }
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(m[i-1][j+1]==1 and m[i][j]==1){
                d4[i][j]=d4[i-1][j+1]+1;
                mv=max(mv,d4[i][j]);
            }
        }
    }

    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            d[i][j]=max(d1[i][j],max(d2[i][j],max(d3[i][j],d4[i][j])));
        }
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(d1[i][j]>1){
                int cnt=0, k=1;
                d1[i][j-d1[i][j]+1]=d1[i][j];
            }
        }
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(d2[i][j]>1){
                int cnt=0, k=1;
                d2[i-d2[i][j]+1][j]=d2[i][j];
            }
        }
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(d3[i][j]>1){
                int cnt=0, k=1;
                d3[i-d3[i][j]+1][j-d3[i][j]+1]=d3[i][j];
            }
        }
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(d4[i][j]>1){
                int cnt=0, k=1;
                d4[i-d4[i][j]+1][j+d4[i][j]-1]=d4[i][j];
            }
        }
    }

    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(m[i][j]==2){
                int a=1,b=1,c=1,e=1;
                if(m[i][j-1]==1) a+=d1[i][j-1];
                if(m[i][j+1]==1) a+=d1[i][j+1];

                if(m[i-1][j]==1) b+=d2[i-1][j];
                if(m[i+1][j]==1) b+=d2[i+1][j];

                if(m[i-1][j-1]==1) c+=d3[i-1][j-1];
                if(m[i+1][j+1]==1) c+=d3[i+1][j+1];

                if(m[i-1][j+1]==1) e+=d4[i-1][j+1];
                if(m[i+1][j-1]==1) e+=d4[i+1][j-1];
                mv=max(mv,max(a,max(b,max(c,e))));
            }
        }
    }
    cout<<mv;
}
