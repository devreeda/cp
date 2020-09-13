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

ll fct(ll n)
{
    if(n > 1)
        return (n * fct(n - 1))%(1000000007);
    else
        return 1;
}

ll sumfct(ll x) {
    ll sum = 0;
    while (x>0)  {
        sum += fct(x);
        x--;
    }
    return  sum %(1000000007);
}

void printV(vi v) {
    for (int i = 0; i<v.size(); ++i) cout << v.at(i) << " ";
    cout << "\n";
}

//g++ -std=c++11 -O2 -Wall c.cpp

void solve() {
    ll s; cin >> s;
    if (s < 3) cout << 0 << "\n";
    else if (s == 3) cout << 1 << "\n";
    else {
        ll x = s/3;
        cout << fct(x) << "\n";
    }
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
