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
    int n, m;
    cin >> n>> m;
    vi v1, v2;
    for (int i = 0; i<n+m; ++i) {
        int num; cin>>num;
        if (i<n) v1.push_back(num);
        else v2.push_back(num);
    }
    int max = 0;
    for (int i = 0; i<n;++i) {
        int min = 2^9;
        for (int j = 0; j<m; ++j) {
            if ((v1.at(i)&v2.at(j)) < min) min = v1.at(i)&v2.at(j);
            printf("%d & %d = %d\n", v1.at(i), v2.at(j), v1.at(i)&v2.at(j));
        }
        if (i == 0) max = min;
        else max = max|min;
    }
    cout <<  max << "\n";
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
