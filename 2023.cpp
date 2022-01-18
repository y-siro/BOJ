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

int N;

bool isprime(int N){
    if(N==1) return false;
    for(int i=2;i<=sqrt(N);++i){
        if(N%i==0) return false;
    }
    return true;
}

void dfs(string s, int depth){
    if(depth==N){
        if(isprime(stoi(s))) cout<<s<<"\n";
        return;
    }
    string ret=s, alp="13579";
    for(int i=0;i<5;++i){
        if(isprime(stoi(ret+alp[i]))) dfs(ret+alp[i],depth+1);
    }
}


int main(void){
    fast;
    cin>>N;
    vector<string> A={"2","3","5","7"};
    for(int i=0;i<4;++i) dfs(A[i],1);
}
