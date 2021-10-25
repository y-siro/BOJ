#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 23254 나는 기말고사형 인간이야 - Greedy, Priority queue

int N,M,num,cnt,req,hts,ans=0;
priority_queue<pair<int,int>, vector<pair<int,int>>> pq;
vector<int> v;

int main(void){
    fast;
    cin>>N>>M; cnt=24*N;
    for(int i=0;i<M;++i){
        cin>>num;
        v.push_back(num);
        ans+=num;
    }
    for(int i=0;i<M;++i){
        cin>>num;
        if(v[i]<100) pq.push(make_pair(min(num,100-v[i]),100-v[i]));
    }
    while(cnt&&!pq.empty()){
        hts=min(pq.top().second/pq.top().first,cnt);
        ans+=hts*pq.top().first;
        cnt-=hts;
        if(pq.top().second-(hts*pq.top().first)>0){
            req=pq.top().second-hts*pq.top().first;
            pq.push(make_pair(req,req));
        }
        pq.pop();
    }
    cout<<ans;
}


// dic_h. ic
int N,M,num,ans=0;
struct cmp{
    bool operator()(pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    }
};
priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
vector<int> v;

int main(void){
    fast;
    cin>>N>>M;
    for(int i=0;i<M;++i){
        cin>>num;
        v.push_back(num);
    }
    for(int i=0;i<M;++i){
        cin>>num;
        pq.push(make_pair(v[i],num));
    }

    int cnt=24*N;
    while(cnt && !pq.empty()){
        if(pq.top().first==100){
            ans+=100;
            pq.pop();
            continue;
        }
        int idx = 100-pq.top().first;
        int take_h = idx/pq.top().second;
        int dic_h = idx%pq.top().second;

        if(cnt>take_h){
            cnt-=take_h;
            ans+=pq.top().first + pq.top().second*take_h;
            pq.pop();
            if(dic_h>=pq.top().second){
                cnt--;
                ans+=dic_h;
            }
            else{
                pq.push(make_pair(0,dic_h));
            }
        }

        else if(cnt==take_h){
            ans+=pq.top().first+pq.top().second*take_h;
            pq.pop();
            break;
        }
        else{
            ans+=cnt*pq.top().second;
            break;
        }
    }
    while(!pq.empty()){
        ans+=pq.top().first;
        pq.pop();
    }

    cout << ans;
    return 0;
}
