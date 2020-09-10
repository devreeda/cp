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


void coutpos(int x, int y) {
    cout << x << " " <<  y << "\n";
}

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    coutpos(x,y);
    for (int i = 1; i<x; ++i) {
        coutpos(i,y);
    }
    for (int i = x+1; i<=n; ++i) {
        coutpos(i,y);
    }
    int parity = 0;
    for (int i = 1; i<=m; ++i) {
        if (i == y) {i++; parity=1;}
        int j;
        if (i%2 == parity) j = 1;
        else j = n;
        if (j == 1) {
            while (j<=n) {
                if (i!=y || j!=x) coutpos(j,i);
                ++j;
            }
        } else {
            while (j>=1) {
                if (i!=y || j!=x) coutpos(j,i);
                --j;
            }
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

    //int tt;
    //cin >> tt;
    //while (tt--) {
        solve();
    //}


    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
