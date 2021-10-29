#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 14653 너의 이름은 - 구현, 문자열

int N,K,Q,R; char P;

vector<pair<int,char>> v;
bool alpha[26]={false,};

int main(void){
    fast;
    cin>>N>>K>>Q;
    for(int i=1;i<=K;++i){
        cin>>R>>P;
        v.push_back(make_pair(R,P));
    }
    for(int i=1;i<=v.size();++i) if(v[Q].first<=v[i].first) alpha[v[i].second-'A']=true;
    for(int i=0;i<N;++i){
        if(!alpha[i]) cout << (char)(i+'A')<<" ";
    }
}
