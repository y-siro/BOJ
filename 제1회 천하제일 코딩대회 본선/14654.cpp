#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 14654 스테판 쿼리 - 구현, 시뮬레이션

int N,num,mx=0,cnt=0,an=0,bn=0;
vector<int> a,b;

int battle(int a, int b){
    if(a==1 and b==1) return 3;
    if(a==1 and b==2) return 2;
    if(a==1 and b==3) return 1;
    if(a==2 and b==1) return 1;
    if(a==2 and b==2) return 3;
    if(a==2 and b==3) return 2;
    if(a==3 and b==1) return 2;
    if(a==3 and b==2) return 1;
    if(a==3 and b==3) return 3;
}

int main(void){
    fast;
    cin>>N;
    for(int i=0;i<N;++i){
        cin>>num;
        a.push_back(num);
    }
    for(int i=0;i<N;++i){
        cin>>num;
        b.push_back(num);
    }
    for(int i=0;i<N;++i){
        if(battle(a[i],b[i])==1){
            mx=max(mx,bn);
            an++; bn=0;
        }
        else if(battle(a[i],b[i])==2){
            mx=max(mx,an);
            an=0; bn++;
        }
        else if(battle(a[i],b[i])==3){
            if(an){
                mx=max(mx,an);
                an=0;bn++;
            }
            else{
                mx=max(mx,bn);
                an++; bn=0;
            }
        }
    }
    mx=max(mx,an); mx=max(mx,bn);
    cout<<mx;
}
