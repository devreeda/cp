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
    vi v;
    bool tousPareils = true;
    int current; cin>>current;
    v.push_back(current);
    for (int i = 1; i<n; ++i) {
        int a; cin>>a;
        if (a != current) tousPareils = false;
        v.push_back(a);
    }
    if (tousPareils) {
        cout << "NO" << endl;
    } else {
        vector<pair<int, int>> bounds;
        int root = v.at(0);
        int rootIndex = 0;
        int other, otherIndex;
        for (int i = 1; i<n; ++i) {
            if (v.at(i) != root) {
                other = v.at(i);
                otherIndex = i;
                break;
            }
        }
        for (int i = 1; i<n; ++i) {
            if (v.at(i) != root) {
                bounds.push_back({rootIndex+1, i+1});
            } else bounds.push_back({otherIndex+1, i+1});
        }
        cout << "YES" << endl;
        for (int k = 0; k<bounds.size(); ++k) {
            cout << bounds.at(k).first << " " << bounds.at(k).second << endl;
        }
    }


    /*int n;cin>>n;
    vi v;
    for (int i = 0; i<n; ++i) {
        int a;cin>>a;
        v.push_back(a);
    }
    vi v2 = v;
    vector<pair<int, int>> res;
    int i = 0;
    while (res.size()<n-1) {
        int actual = -1;
        int current = v.at(i);
        //cout << current << endl;
        for (int j = 0; j<n;++j) {
            if (v.at(j) != -1 && current != v.at(j)) {
                actual = j;
                break;
            }
        }
        if (actual == -1) break;
        res.push_back({i+1,actual+1});
        v.at(i) = -1;
        i = actual;
    }
    if (res.size() < n-1) res = {};
    i = n-1;
    while (res.size()<n-1) {
        int actual = -1;
        int current = v2.at(i);
        //cout << current << endl;
        for (int j = n-1; j>=0;--j) {
            if (v2.at(j) != -1 && current != v2.at(j)) {
                actual = j;
                break;
            }
        }
        if (actual == -1) break;
        res.push_back({i+1,actual+1});
        v2.at(i) = -1;
        i = actual;
    }
    if (res.size() < n-1) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int k = 0; k<res.size(); ++k) {
            cout << res.at(k).first << " " << res.at(k).second << endl;
        }
    }*/
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
