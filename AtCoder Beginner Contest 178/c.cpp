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

//g++ -std=c++11 -O2 -Wall c.cpp

ll fct(ll n)
{
    if(n > 1)
        return (n * fct(n - 1))%(1000000007);
    else
        return 1;
}

void solve() {
    ll n; cin >> n;
    ll result;
    if (n==2) cout << 2 << "\n";
    else if (n<2) cout << 0 << "\n";
    else {
        result = (ll)((n*n-n)%(1000000007))*((ll)pow(10.0, n-2)%(1000000007));
        cout << result%(1000000007) << "\n";
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
