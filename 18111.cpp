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

const int MM=505;
int N,M,B;
int min_h=(int)1e9+7, max_h=-1;
int mv=(int)1e9+7,mh;
int m[MM][MM];

pii fs(int x, int cnt){
    int tt=0;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(m[i][j]<x){
                cnt-=x-m[i][j];
                tt+=x-m[i][j];
            }
            if(m[i][j]>x){
                tt+=(m[i][j]-x)*2;
                cnt+=m[i][j]-x;
            }
        }
    }
    if(cnt<0) return {-1,-1};
    return {tt, x};
}

int main(void){
    fast;
    cin>>N>>M>>B;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin>>m[i][j];
            min_h=min(min_h,m[i][j]);
            max_h=max(max_h,m[i][j]);
        }
    }
    for(int i=min_h;i<=max_h;++i){
        if(fs(i,B).first==-1) continue;
        if(mv>=fs(i,B).first){
            pii p=fs(i,B);
            mv=p.first; mh=p.second;
        }
    }
    cout<<mv<<' '<<mh;
}
