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
    //ALL POSSIBILITIES
    /** 
     * << => depends du reste = si on ne rencontre pas de > par la suite
     * <> => not leavable
     * <- => leavable
     * >> => depends du reste = si on ne rencontre pas de < par la suite
     * >< => not leavable
     * >- = leavable
     * -> = leavable
     * -< = leavable
     * -- = leavable
     * */
    int n; cin>>n;
    int nbSUP = 0, nbINF = 0, nbTIRET = 0;
    vector<char> v;
    for (int i = 0; i<n; ++i) {
        char a; cin>>a;
        if (a == '<') nbINF++;
        if (a == '>') nbSUP++;
        else nbTIRET++;
        v.push_back(a);
    }
    int ans = 0;
    for (int i = 0; i<n; ++i) {
        if (v.at(i) == '-' || v.at((i+1)%n) == '-') {
            ans++;
            continue;
        } else if (v.at(i) == '>' && v.at((i+1)%n) == '>') {
            if (nbINF == 0) ans++;
        } else if (v.at(i) == '<' && v.at((i+1)%n) == '<') {
            if (nbSUP == 0) ans++;
        }
    }
    cout << ans << endl;
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
