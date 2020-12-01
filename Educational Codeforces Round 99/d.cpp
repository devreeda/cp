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
    ll x, y; cin>>x>>y;
    ll ptx = 0,pty = 0;
    //if x > y
        //y don't play when not serving until x == y
    //if x == y
    //if x < y

    /*
    if (x>y) {
        
        ptx+=x-y*2;
    }*/
    bool xserves = true;
    while (x>0 || y >0) {
        if (x>y) { 
            if (y>x-y*2) {
                if (xserves) {
                    --x;
                    ptx++;
                    xserves = true;
                } else {
                    --y;
                    --x;
                    ptx++;
                    xserves = true;
                }
            } else {
                x -= y;
                y = 0;
                ++ptx;
                ptx+=x;
                x = 0;
            }
        } else if (x==y) {
            if (xserves) {
                --x;
                --y;
                pty++;
                xserves = false;
            } else {
                --x;
                --y;
                ptx++;
                xserves = true;
            }
        } else {
            if (x>y-x*2) {
                if (!xserves) {
                    --y;
                    pty++;
                    xserves = false;
                } else {
                    --x;
                    --y;
                    pty++;
                    xserves = false;
                }
            } else {
                y -= x;
                x = 0;
                ++pty;
                pty += y;
                y = 0;
            }
        }
    } 
    cout <<  ptx << " " << pty << '\n';
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
