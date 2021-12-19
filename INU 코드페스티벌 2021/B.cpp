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

int main(void){
    fast;
    int N; cin>>N;
    int a[10]={6,2,5,5,4,5,6,3,7,6};

    N-=4;
    for(int i=0;i<10;++i){
        for(int j=0;j<10;++j){
            for(int l=0;l<10;++l){
                for(int k=0;k<10;++k){
                    for(int h=0;h<10;++h){
                        for(int g=0;g<10;++g){
                            if((a[i]+a[j]+a[l]+a[k]+a[h]+a[g]==N) and (i*10+j+l*10+k==h*10+g)) {
                                cout<<i<<j<<'+'<<l<<k<<'='<<h<<g; return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"impossible";
}
