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
    ll n, k; cin>>n>>k;
    vi v;
    for (ll i =0; i<n; ++i) {
        int num; cin>>num;
        v.push_back(num);
    }
    int length = k-1;
    int most = v.at(0), mostnb = 1;
    //trouve le nb apparaissant le plus souvent
    for (ll i = 0; i<n; ++i) {
        int curr = v.at(i), num = 0;
        for (ll j = 0; j<n; ++j) {
            if (i!=j) {
                if (v.at(j) == curr) ++num;
            }
        }
        if (num > mostnb) {
            mostnb = num;
            most = curr;
        }
    }


    ll i = 0;
    int count = 0;
    while (i < v.size()) {
        if (v.at(i) != most) {
            i += length+1;
            ++count;
        } else ++i;
    }
    cout << count << "\n";
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
