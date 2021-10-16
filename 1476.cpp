#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vi vector<int>
#define pb push_back

int e,s,m,ans,year=1;
int main(void){
    fast;
    cin>>e>>s>>m;
    while(true){
        if((year-e)%15==0 && (year-s)%28==0 && (year-m)%19==0){
            ans=year;
            break;
        }
        year++;
    }

    cout << year;
    return 0;
}



