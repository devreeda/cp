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
g++ -std=c++11 -O2 -Wall b.cpp
*/
void solve() {
    int n, u, v;
    cin>>n>>u>>v;
    vi obstacles;
    for (int i = 1; i<=n; ++i) {
        int num; cin>>num;
        obstacles.push_back(num);
    }
    //on parcours les obstacles à la recherche d'une brêche
    bool isOpen = false;
    for (int i = 0; i<n-1; ++i) {
        if (obstacles.at(i+1) < obstacles.at(i)-1 || obstacles.at(i+1) > obstacles.at(i)+1) {
            isOpen = true;
            break;
        }
    }
    if (isOpen) {
        cout << 0 << endl;
    } else {
        if (obstacles.at(n-1) == obstacles.at(n-2)) {
            //cout << 
        }
    }
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
