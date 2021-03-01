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
g++ -std=c++11 -O2 -Wall c.cpp
*/
void solve() {
    int n; cin>>n;
    vi v;
    int num1 = 0;
    for (int i = 0; i<n; ++i) {
        int a;cin>>a;
        if (a == 1) num1++;
        v.push_back(a);
    }
    int tours = 0;
    while (num1 < n) {
        int a = 0;
        int b = n-1;
        while (a<n && v.at(a) == 1) a++;
        while (b>=0 && v.at(b) == 1) b--;
        tours++;
        int nbToucheSupA1Max = 0;
        int indiceDepartMax = 0;
        //on chope l'indice de départ opti    
        for (int i = a; i<=b; ++i) {
            if (v.at(i) == 1) continue;
            int j = 0;
            int nb = 0;
            while (j<n) {
                if (v.at(j) > 1)
                    nb++;
                j+=v.at(j);
            }
            if (nb > nbToucheSupA1Max) {
                nbToucheSupA1Max = nb;
                indiceDepartMax = i;
            }
        }

        //on le fait
        int i = indiceDepartMax;
        while (i<n) {
            if (v.at(i) > 1) {
                v.at(i)--;
                if (v.at(i) == 1)
                    num1++;
                i += v.at(i)+1;
            } else {
                i++;
            }
        }
    }
    cout << tours << endl;
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
