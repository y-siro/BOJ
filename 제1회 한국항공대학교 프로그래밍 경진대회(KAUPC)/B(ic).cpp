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

int N, mvs = -1;
vc<pair<pair<string, string>, pii>> A;
int tt[50505] = { 0, };

bool cmp(pair<pair<string, string>, pii> p1, pair<pair<string, string>, pii> p2) {
    return p1.first.second < p2.first.second;
}

bool cmp2(pair<int, pii> p1, pair<int, pii> p2) {
    return p1.first > p2.first;
}

bool cmp3(pii p1, pii p2) {
    if (p1.first == p2.first) return p1.second > p2.second;
    return p1.first < p2.first;
}

int main(void) {
    fast;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string name, place; int s, e; bool flag = true;
        cin >> name >> place >> s >> e;
        for (int j = 0; j < A.size(); ++j) {
            if (A[j].first.first == name) flag = false;
        }
        if (!flag) continue;
        A.pb({ {name,place},{s,e} });
    }
    sort(A.begin(), A.end(), cmp);

    for (int i = A[0].second.first; i < A[0].second.second; ++i) tt[i]++;
    string p = A[0].first.second;
    vc<pair<string, int>> B;
    for (int i = 1; i < A.size(); ++i) {
        if (A[i - 1].first.second == A[i].first.second) {
            for (int j = A[i].second.first; j < A[i].second.second; ++j) tt[j]++;
            if (i == A.size() - 1) {
                int mv = 0;
                for (int j = 0; j < 50505; ++j) mv = max(mv, tt[j]);
                B.pb({ A[i].first.second,mv });
            }
        }
        else {
            int mv = 0;
            for (int j = 0; j < 50505; ++j) mv = max(mv, tt[j]);
            B.pb({ A[i - 1].first.second,mv });
            for (int j = 0; j < 50505; ++j) tt[j] = 0;
            for (int j = A[i].second.first; j < A[i].second.second; ++j) tt[j]++;
        }
    }
    int mv = 0;
    for (int i = 0; i < B.size(); ++i) {
        mv = max(mv, B[i].second);
    }
    string ap;
    for (int i = 0; i < B.size(); ++i) {
        if (B[i].second == mv) {
            ap = B[i].first; break;
        }
    }
    vc<pii> aa;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i].first.second == ap) {
            aa.pb({ A[i].second.first,A[i].second.second });
        }
    }
    

    sort(aa.begin(), aa.end(),cmp3);

    int cnt=1, ss = 0, ee = 0; int ans_s=0, ans_e=0;
    ss = aa[0].first; ee = aa[0].second;
    for (int i = 1; i < aa.size(); ++i) {
        if (ee <= aa[i].first) {
            if (cnt > mvs) {
                mvs = cnt; ans_s = ss; ans_e = ee;
            }
            ss = aa[i].first; ee = aa[i].second;
            cnt = 1;
        }
        else {
            ss = max(ss, aa[i].first); ee = min(ee, aa[i].second);
            cnt++;
        }
        //cout << ss << ' ' << ee << ' ' << cnt << ' ' << mvs << "\n";
        
    }
    if (cnt > mvs) {
        ans_s = ss; ans_e = ee;
    }

    cout << ap << ' ' << ans_s << ' ' << ans_e;
}
