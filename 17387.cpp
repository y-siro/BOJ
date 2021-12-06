#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

// 17387 선분 교차 2 - 기하학, 많은 조건 분기, 선분 교차 판정

pair<int,int> a,b,c,d;

int ccw(pair<ll, ll> p1, pair<ll, ll> p2, pair<ll, ll> p3) {
    ll temp = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    temp = temp - p1.second * p2.first - p2.second * p3.first - p3.second * p1.first;
    if (temp > 0) return 1;
    else if (temp == 0) return 0;
    else if (temp < 0) return -1;
}

int main(void){
    cin>>a.F>>a.S>>b.F>>b.S>>c.F>>c.S>>d.F>>d.S;
    int abc=ccw(a,b,c), abd=ccw(a,b,d), cda=ccw(c,d,a), cdb=ccw(c,d,b);
    if(abc*abd==0 and cda*cdb==0){
        if(a>b) swap(a,b);
        if(c>d) swap(c,d);
        if(a<=d and c<=b) cout<<1;
        else cout<<0;
        return 0;
    }
    if(abc*abd<=0 and cda*cdb<=0) cout<<1;
    else cout<<0;
}
