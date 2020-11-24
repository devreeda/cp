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

//g++ -std=c++11 -O2 -Wall b.cpp

void solve() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    //chaque q
    for (int i = 0; i<q; ++i) {
        int li, ri; cin >> li >> ri;
        string subs = s.substr(li-1, ri-li+1);
        bool found = false;
        //parcours le subs
        for (int j = 0; j<(ri-li+1);++j) {
            string news = s;
            //on efface un des char du subs
            news.erase(news.begin()+(li-1)+j);
            int indexSubs = 0;
            //cout << "news : " << news << endl;
            //cout << "subs : "<< subs << endl;
            for (int k = 0; k<news.size(); ++k) {
                if (indexSubs < subs.size())
                    if (news[k] == subs[indexSubs]) indexSubs++;
            }
            if (indexSubs == subs.size()) {
                found = true;
                break;
            }
        }
        if (found) cout << "YES" << "\n";
        else cout << "NO" << "\n";
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
