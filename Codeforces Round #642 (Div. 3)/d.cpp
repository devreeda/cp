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

void putInMiddle(ll l, ll r, int i, vi & a) {
    //cout << " l : " << l << " r : " << r << "\n"; 
    //cout << "r - l : " << r-l << "\n";
    if (r-l == 1) {
        a.at(l) = i;
        if (r > a.size()/2)
            putInMiddle(r, r, i+2, a);
        else 
            putInMiddle(r, r, i+2, a);
    } else if (r-l == 2) {
        a.at(r) = i;
    } else if (r-l <= 0) {
        a.at(l) = i;
        return;
    }
    else {
        a.at((r+l)/2) = i;
        //printV(a);
        if ((r-l)%2 == 0) {
            putInMiddle(l, (r+l)/2-1, i+1, a);
            putInMiddle((r+l)/2+1, r, i+2, a);
        } else {
            putInMiddle(l, (r+l)/2-1, i+2, a);
            putInMiddle((r+l)/2+1, r, i+1, a);
        }
    }
}

void solve() {
    ll n; cin >> n;
    vi a;
    for (ll i = 0; i<n; ++i) a.push_back(0);
    putInMiddle(0, n-1, 1, a);
    /*for (ll i = 0; i<n; ++i) {
        ll r= 0;

        ll current = 0, max = 0, lcurrent = 0, l = 0;
        for (int i = 0; i<n; ++i) {
            if (a.at(i) == 0) current++;
            else {
                if (current > max) {
                    max = current;
                    l = lcurrent;
                }
                lcurrent = i+1;
                current = 0;
            }
        }
        if (current > max) {
            max = current;
            l = lcurrent;
        }
        //cout << "l : "<<l << "\n";  
        r = l+max-1;
//        while (r<n && a.at(r) == 0) ++r;
        if ((r-l+1)%2 != 0) a.at((l+r)/2) = i+1;
        else a.at((l+r-1)/2) = i+1;
        //printV(a);
    }*/
    printV(a);
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
