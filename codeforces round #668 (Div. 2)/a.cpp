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
    int n; cin>>n;
    vi v;
    for (int i = 0; i<n; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
    }/*
    vi fingerP;
    for (int i = 0; i<n-1; ++i) {
        int sum = v.at(i) + v.at(i+1);
        fingerP.push_back(sum);
    }
    sort(fingerP.begin(), fingerP.end());*/
    reverse(v.begin(), v.end());
    for (int i = 0; i<n; ++i) cout << v.at(i) << " ";
    cout << endl;
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
