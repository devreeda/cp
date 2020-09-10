#include <bits/stdc++.h>

using namespace std;

/*
const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;*/

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)



void solve() {
	int n; cin>> n;
    vi v;
    for (int i = 0 ; i<n;++i) {
        ll num; cin>>num;
        v.push_back(num);
    }
    int i = 0;
    vi v2 = v;
    vector<bool> vb;
    for (int j = 0; j<v.size(); ++j) {
            vb.push_back(false);
            v.at(j) += j;
    }
    int casecount = 0;
    while (i < 20 && casecount < v.size()) {
        casecount = 0;
        for (int j = 0; j<v.size(); ++j) {
            for (int k = j+1; k<v.size();++k) {
                if (v.at(j) == v.at(k)) {
                    vb.at(j) = true;
                    vb.at(k) = true;
                }
            }
            v.at(j) += v2.at(j);
        }
        ++i;
        for (int j = 0; j<vb.size(); ++j)
            if (vb.at(j)) casecount++;
    }
    if (casecount == 2) cout << 1 << " " << 2 << "\n";
    else if (casecount == 0) cout << 1 << " " << 1 << "\n";
    else if (casecount == 3) cout << 3 << " " << 3 << "\n";
}

void solve2() {
    int n; cin>> n;
    vi v;
    for (int i = 0 ; i<n;++i) {
        ll num; cin>>num;
        v.push_back(num);
    }
    int i = 0;
    vi v2 = v;
    vector<bool> vb;
    for (int j = 0; j<v.size(); ++j) {
            vb.push_back(false);
            v.at(j) += j;
    }
    int casecount = 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
}
