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

//g++ -std=c++11 -O2 -Wall a.cpp

void solve() {
    int n; cin >> n;
    vector<vector<char>> v;
    int nb = 0;
    for (int i=0;i<n;++i) {
        vector<char> vc;
        for (int j=0;j<n;++j) {
            char c; cin >> c;
            vc.push_back(c);
        }
        v.push_back(vc);
    }
    for (int i = 0; i<n;++i) {
        for (int j=0; j<n;++j) {
            if (v[i][j] == '.') {
                //x
                if (i-1>=0 && v[i-1][j] == 'X') {
                    nb++;
                    v[i][j] = 'o';
                    continue;
                } else if (i+1<v.size() && v[i+1][j] == 'X') {
                    nb++;
                    v[i][j] = 'o';
                    continue;
                }
                //y
                else if (j-1 >=0 && v[i][j-1] == 'X') {
                    nb++;
                    v[i][j] = 'o';
                    continue;
                }
                else if (j+1 < n && v[i][j+1] == 'X') {
                    nb++;
                    v[i][j] = 'o';
                    continue;
                } 
                //diag
                if (i-1 >=0) {
                    if (j-1>=0 && v[i-1][j-1] == 'X') {
                        nb++;
                    v[i][j] = 'o';
                    continue;
                    }
                    if (j+1<n && v[i-1][j+1] == 'X') {
                        nb++;
                    v[i][j] = 'o';
                    continue;
                    }
                }
                if (i+1 <n) {
                    if (j-1>=0 && v[i+1][j-1] == 'X') {
                        nb++;
                    v[i][j] = 'o';
                    continue;
                    }
                    if (j+1<n && v[i+1][j+1] == 'X') {
                        nb++;
                    v[i][j] = 'o';
                    continue;
                    }
                }
            }
        }
    }
    cout << nb << "\n";
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
