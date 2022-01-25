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

int N,a,b;
vector<int> ret;

int main(void){
    fast;
    cin>>N>>a>>b;

    if(a+b>N+1){
        cout<<-1; return 0;
    }
    int res=max(a,b);

    if(a<b){
        if(a==1){
            cout<<res<<' ';
            int nn=N-(b-1)-a;
            while(nn--) cout<<1<<' ';
            for(int i=1;i<a;++i) cout<<i<<' ';
            for(int i=b-1;i>0;--i) cout<<i<<' ';
        }
        else{
            int nn=N-(b-1)-a;
            while(nn--) cout<<1<<' ';
            for(int i=1;i<a;++i) cout<<i<<' ';
            cout<<res<<' ';
            for(int i=b-1;i>0;--i) cout<<i<<' ';
        }
    }
    else{
        int nn=N-a-(b-1);
        while(nn--) cout<<1<<' ';
        for(int i=1;i<=a;++i) cout<<i<<' ';
        for(int i=b-1;i>0;--i) cout<<i<<' ';
    }
}
