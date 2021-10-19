#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define endl "\n"

int m, x, bit;
string s;
int main(void){
    fast;

    cin>>m;
    while(m--){
        cin>>s;
        if(s=="add"){
            cin>>x;
            bit|=(1<<x);
        }
        else if(s=="remove"){
            cin>>x;
            bit&=~(1<<x);
        }
        else if(s=="check"){
            cin>>x;
            if(bit&(1<<x)) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(s=="toggle"){
            cin>>x;
            bit^=(1<<x);
        }
        else if(s=="all") bit=(1<<21)-1;
        else if(s=="empty") bit=0;
    }

    return 0;
}
