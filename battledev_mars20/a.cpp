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

//g++ -std=c++11 -O2 -Wall a.cpp

void solve() {
    int n; cin>>n;
    vector<string> vs;
    vi v;
    for (int i = 0; i<n; ++i) {
        string s;
        cin >> s;
        int j;
        bool isIn = false;
        for (j=0;j<vs.size();++j) {
            if (s == vs.at(j)) {
                v.at(j)++;
                isIn = true;
            }
        }
        if (!isIn) {
            vs.push_back(s);
            v.push_back(1);
        }
    }
    int firstIndex = 0, secondIndex = 1;
    for (int i = 1; i<v.size(); ++i) {
        if (v.at(i) > v.at(firstIndex)) firstIndex = i;
    }
    if (secondIndex == firstIndex) secondIndex = abs(firstIndex - 1);
    for (int i = 0; i<v.size(); ++i) {
        if (v.at(i) > v.at(secondIndex) && v.at(i) < v.at(firstIndex)) secondIndex = i;
    }
    cout << vs.at(firstIndex) << " " << vs.at(secondIndex) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        solve();


    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
