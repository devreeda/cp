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



void solve() {
    int n; cin >> n;
    vector<ll> v;
    for (int i = 0; i<n; ++i) {
        ll num; cin >> num;
        v.push_back(num);
    }

    ll maxSuffixSum = 0, sum = 0;
    for (int i = n-1; i>=0; --i) {
        sum += v.at(i);
        if (maxSuffixSum < sum) maxSuffixSum = sum;
    }

    cout << maxSuffixSum << "\n";

    //int inf = 0, plus = 0;
    //int i = n;

    //parcourir tout le tableau
        //à chaque fois qu'on tombe sur un nombre négatif
            //parcourir tout le tableau jusqu'au nombre négatif tant que le nombre est < 0 
            //à chaque fois qu'on tombe sur un nombre positif
                //l'ajouter au nombre négatif tant qu'il est négatif

    /*for (int i = n-1; i>=0; --i) {
        if (v.at(i) < 0) {
            int j = 0, indexMax = 0;
            while (v.at(i) < 0) {
                while (j<i) {
                    if (v.at(j) > v.at(indexMax)) indexMax = j;
                    ++j;
                }
                if (v.at(indexMax) <= 0) break;

                if (v.at(indexMax) > -v.at(i)) {
                    v.at(indexMax) += v.at(i);
                    v.at(i) = 0;
                } else {
                    v.at(i) += v.at(indexMax);
                    v.at(indexMax) = 0;
                }
            }
        }
    }
    
    ll sum = 0;
    for (int i = 0; i<n; ++i) {
        if (v.at(i) >0) sum += v.at(i);
    }

    cout << sum << "\n";
*/
    /*while (--i >= 0) {
        if (v.at(i) < 0 && inf == 0) inf = v.at(i);
        if (v.at(i) > 0 && inf < 0 && plus == 0) plus = v.at(i);
    } 
    if (inf < 0) {

    }*/
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
}
