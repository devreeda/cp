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
g++ -std=c++11 -O2 -Wall a.cpp
*/
void solve() {
    int n;cin>>n;
    int q;cin>>q;
    int numOf1 = 0;
    vi a;
    for (int i = 0; i<n; ++i) {
        int num;cin>>num;
        if (num == 1) numOf1++;
        a.push_back(num);
    }
    for (int i = 0; i<q; ++i) {
        int x,y; cin>>x>>y;
        if (x == 1) {
            if (a.at(y-1) == 1) numOf1--;
            else numOf1++;
            a.at(y-1) = 1 - a.at(y-1);
            //cout << a.at(y-1) << endl;
        } else {
            //vi b = a;
            if (y > numOf1) cout << 0 << endl;
            else cout << 1 << endl;
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
    
    solve();


    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
