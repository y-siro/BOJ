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

int N,M;
char m[55][55];

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin>>m[i][j];
        }
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(m[i][j]!='.'){
                m[i][M-j-1]=m[i][j];
            }
        }
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cout<<m[i][j];
        }
        cout<<"\n";
    }
}
