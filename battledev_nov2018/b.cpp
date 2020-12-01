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
    int n;cin>>n;
    vector<string> v;
    for (int i =0;i<n;++i){
        string s;cin>>s;
        if (s.size() >=5 && s.size() <=7) {
            if ((int)s[1] == (int)s[0]+1) {
                if (s[s.size()-1] == 'a'
                || s[s.size()-1] == 'e'
                || s[s.size()-1] == 'i'
                || s[s.size()-1] == 'o'
                || s[s.size()-1] == 'u'
                || s[s.size()-1] == 'y') {
                    v.push_back(s);
                }
            }
        }
    }
    set<string> rep(v.begin(),v.end());
    cout << rep.size() << "\n"; 
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
