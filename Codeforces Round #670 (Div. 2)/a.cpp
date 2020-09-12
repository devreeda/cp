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

void printV(vi v) {
    for (int i = 0; i<v.size(); ++i) cout << v.at(i) << " ";
    cout << "\n";
}

void solve() {
    int n; cin >> n;
    vi v;
    for (int i = 0; i<n; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    vi a, b;
    int counter = 0;
    for (int i = 0; i<n; ++i) {
        if (v.at(i) == counter) {
            a.push_back(v.at(i));
            counter++;
        } else {
            b.push_back(v.at(i));
        }
    }
    int suma = 0, sumb = 0;
    set<int> s( b.begin(), b.end() );
    b.assign( s.begin(), s.end() );
    int i = 0;
    while (i<a.size() && a.at(i) == suma) {
        suma++;
        ++i;
    }
    i = 0;
    while (i<b.size() && b.at(i) == sumb) {
        sumb++;
        ++i;
    }
    cout << suma+sumb << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }


    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
