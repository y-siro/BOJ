#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// 1766 문제집 - 그래프 이론, 자료 구조, 우선순위 큐, 위상 정렬

int N,M,A,B;
int d[33333];
vector<int> v[33333];
priority_queue<int,vector<int>,greater<int>> pq;

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<M;++i){
        cin>>A>>B;
        v[A].push_back(B);
        d[B]++;
    }
    for(int i=1;i<=N;++i) if(!d[i]) pq.push(i);
    while(!pq.empty()){
        int cur=pq.top(); pq.pop();
        cout<<cur<<" ";
        for(int i=0;i<v[cur].size();++i){
            int next=v[cur][i];
            if(!--d[next]) pq.push(next);
        }
    }
}
