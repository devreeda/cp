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

/*
g++ -std=c++11 -O2 -Wall a.cpp
*/
void solve() {
    int n; cin>>n;
    string a, b;
    cin >> a >> b;
    vi s1, s2;
    for (int i = 0; i<n; ++i) {
        s1.push_back(a[i]);
    }
    for (int i = 0; i<n; ++i) {
        s2.push_back(b[i]);
    }
    sort(s1.begin(), s1.end());
    reverse(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    reverse(s2.begin(), s2.end());

    int c1 = 0, c2 = 0;
    for (int i = 0; i<n;++i) {
        for (int j = 0; j<n; ++j) {
            if (s1[i] > s2[j]) ++c1;
            if (s1[i] < s2[j]) ++c2;    
        }
    }
    if (c1>c2) cout << "RED" << "\n";
    else if (c2>c1) cout << "BLUE" << "\n";
    else cout << "EQUAL" << "\n";
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
