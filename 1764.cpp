#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"
typedef long long ll;

// boj 1764 : set, string

set<string> s; set<string>::iterator iter;
vector<string> ans;
string str;
int N,M;

int main(void){
    cin>>N>>M;
    for(int i=0;i<N;++i) {
        cin>>str;
        s.insert(str);
    }
    for(int i=0;i<M;++i){
        cin>>str;
        iter=s.find(str);
        if(iter!=s.end()) ans.pb(str);
    }

    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();++i){
        cout<< ans[i] << endl;
    }

    return 0;
}
