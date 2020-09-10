#include <bits/stdc++.h>

using namespace std;


const int MAX_N = 1e5 + 5;/*
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
    int n; cin>>n;
    vi v;
    for (int i = 0; i<n;++i) {
        int num; cin>> num;
        v.push_back(num);
    }
    int x = 0, y = 0;
    while (x < v.size()) {
        y = x+1;
        while (y<v.size()) {
            if ((v.at(x)%2 == v.at(y)%2 || abs(v.at(x) - v.at(y)) == 1)  && v.at(x) < 200 && v.at(y) < 200) {
                v.at(x) = MAX_N/2;
                v.at(y) = MAX_N/2;
                y=v.size();
            }
            else ++y;
        }
        ++x;
    }
    bool isEmpty = true;
    for (int i = 0; i<n; ++i) {
        if (v.at(i) != MAX_N/2) isEmpty = false;
    }
    if (!isEmpty) cout << "NO" << "\n";
    else cout << "YES" << "\n";
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
