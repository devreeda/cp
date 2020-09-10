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
    ll n; cin>>n;
    vi v;
    for (int i = 0; i<n; ++i) {
        int num; cin >> num;
        v.push_back(num);
    }
    int diff = MAX_N;
    for (int i = 0; i<n; ++i) {
        for (int j = i+1; j<n; ++j) {
            if (abs(v.at(i) - v.at(j)) < diff) {
                diff = abs(v.at(i) - v.at(j));
            }
        }
    }
    cout << diff << "\n";
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


    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
