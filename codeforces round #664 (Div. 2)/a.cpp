#include <bits/stdc++.h>

using namespace std;


/*const int MAX_N = 1e5 + 5;
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
    ll r,g,b,w;
    cin >> r >> g >> b >> w;
    vector<ll> v = {r,g,b,w};
    int nbImpair = 0;
    for (int i = 0; i<4; ++i) {
            if (v.at(i)%2 != 0) nbImpair++;
    }

    //si nbImpair < 2 : GOOD
    //sinon
        //si nbImpair > 2 :
            //si de 0 à 3 c'est > 0 : GOOD
            //sinon : NOT GOOD
        //si nbImpair = 2 (sinon) :
            //de 0 à 3 : -= min(0,3); 4 += min(0,3)*3
            //si nbImpair < 2 : GOOD
            //sinon : NOT GOOD

    if (nbImpair < 2) cout  << "Yes" << "\n";
    else {
        if (nbImpair > 2) {
            bool isGood = true;
            for (int i = 0; i<3; ++i) if (v.at(i) == 0) isGood = false;
            if (isGood) cout << "Yes" << "\n";
            else cout << "No" << "\n";
        } else {
            ll min = 1e9;
            nbImpair = 0;
            for (int i = 0; i<3; ++i) if (min > v.at(i)) min = v.at(i);
            for (int i = 0; i<4; ++i) {
                if (i < 3) v.at(i) -= min;
                else v.at(i) += min*3;
                if (v.at(i)%2 != 0) nbImpair++;
            }
            if (nbImpair < 2) cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }
    }
/*
    while (nbImpair > 1 && (v.at(0) > 0 && v.at(1) > 0 && v.at(2) > 0)) {
        nbImpair = 0;
        for (int i = 0; i<4; ++i) {
            if (v.at(i)%2 != 0) nbImpair++;
        }
        if (nbImpair <= 1) break;
        v.at(0)--;
        v.at(1)--;
        v.at(2)--;
        v.at(3)+=3;
    }
    nbImpair = 0;
    for (int i = 0; i<4; ++i) {
            if (v.at(i)%2 != 0) nbImpair++;
    }
    if (nbImpair <= 1) cout << "Yes" << "\n";
    else cout << "No" <<  "\n";*/
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
