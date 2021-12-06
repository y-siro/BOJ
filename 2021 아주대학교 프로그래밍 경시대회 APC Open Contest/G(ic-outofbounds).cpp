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
#define F first
#define S second

// boj 2021 아주대학교 프로그래밍 경시대회 APC Open Contest - G
// string, DFS, parsing

int R,C;
string v[1111][1111];
bool visited[1111][1111];

bool dfs(int x, int y){
    visited[x][y]=true;
    string s=v[x][y];
    int len=s.size();
    for(int i=0;i<s.size();++i){
        if(s[i]=='+'){
            string sub=s.substr(0,i);
            for(int j=0;j<sub.size();++j){
                if(sub[j]>='1' and sub[j]<='9'){
                    string sub2=sub.substr(0,j);
                    int nx=0, ny=0;
                    if(sub2.size()==2){
                        ny+=(int)(sub2[0]-'A')*26+(int)(sub2[1]-'A');
                    }
                    if(sub2.size()==1) ny+=(int)(sub2[0]-'A');
                    sub.erase(sub.begin(),sub.begin()+j+1);
                    if(sub.size()==3) nx+=sub[0]*100 + sub[1]*10 + sub[2]-1;
                    else if(sub.size()==2) nx+=sub[0]*10 + sub[1]-1;
                    else if(sub.size()==1) nx+=(int)sub[0]-1;
                    cout<<nx<<","<<ny<<"\n";
                    if(visited[nx][ny]) {
                        cout<<"yes"; exit(0);
                    }

                    dfs(nx,ny);
                }
            }

            s.erase(s.begin(),s.begin()+i+1);
            i=0; len=s.size();
        }
        if(i==len-1) {
            for(int j=0;j<s.size();++j){
                if(s[j]>='1' and s[j]<='9'){
                    string sub=s.substr(0,j);
                    int nx=0, ny=0;
                    if(sub.size()==2){
                        ny+=(int)(sub[0]-'A')*26+(int)(sub[1]-'A');
                    }
                    else if(sub.size()==1) {
                        ny+=(int)sub[0]-'A'; //cout<<nx;
                    }
                    s.erase(s.begin(),s.begin()+j);
                    if(s.size()==3) nx+=s[0]*100 + s[1]*10 + s[2]-1;
                    else if(s.size()==2) nx+=(s[0]-'0')*10 + s[1] -1;
                    else if(s.size()==1) nx+=(s[0]-'0') -1;
                    cout<<nx<<","<<ny<<"\n";
                    if(visited[nx][ny]) {
                        cout<<"yes"; exit(0);
                    }
                    dfs(nx,ny);
                }
            }
        }
    }
    return false;
}


int main(void){
    fast;
    cin>>R>>C;
    for(int i=0;i<R;++i){
        for(int j=0;j<C;++j){
            string str; cin>>str;

            v[i][j]=str;
        }
    }

    for(int i=0;i<1111;++i){
        for(int j=0;j<1111;++j){
            memset(visited,false,sizeof(visited));
            if(v[i][j]==".") continue;
            if(dfs(i,j)) {
                cout<<"yes"; return 0;
            }
        }
    }
    cout<<"no";
}
