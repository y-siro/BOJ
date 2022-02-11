#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int N,K,cnt=0;
string s;

int main(void){
    cin>>N>>K>>s;
    for(int i=0;i<N;++i){
        if(s[i]=='H'){
            for(int j=1;j<=K;++j){
                if(s[i+j]=='P'){
                    cnt++; s[i+j]='C'; break;
                }
            }
        } else if(s[i]=='P'){
            for(int j=1;j<=K;++j){
                if(s[i+j]=='H'){
                    cnt++; s[i+j]='C'; break;
                }
            }
        }
    }
    cout<<cnt;
}
