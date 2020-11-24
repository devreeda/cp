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
    ll n, k; cin >> n >> k;
    string a, b; cin >> a >> b;
    //impossible si
    //-nb de lettres a différentes de b < k
    //-
    vi va, vb;
    for (int i = 0;i<n;++i) {
        va.push_back((int)a.at(i)-96);
        vb.push_back((int)b.at(i)-96);
    }
    sort(va.begin(),va.end());
    sort(vb.begin(),vb.end());
    vi newva;
    for (int i = 0; i<n; ++i) {
        int erased = false;
        for (int j = 0; j<vb.size(); ++j) {
            if (va[i] == vb[j]) {
                vb.erase(vb.begin()+j);
                erased = true;
                break;
            }
        }
        if (!erased) newva.push_back(va[i]);
    }
    int i = 0;
    bool possible = true;
    while (i<newva.size()) {
        int currentNum = newva[i];
        int taillechaine = 0;
        while (i<newva.size() && newva[i]==currentNum) {
            ++i;
            ++taillechaine;
        }
        //cherche meme taille chaine dans vb
        int j = 0;
        int cnumb = vb[j];
        int tcb = 0;
        //on chope une chaine
        while (j<vb.size() && tcb < taillechaine) {
            if (cnumb == vb[j]) {
                tcb++;
            } else {
                tcb = 1;
                cnumb = vb[j];
            }
            ++j;
            if (tcb == taillechaine) {
                if (j < vb.size()) {
                    if (vb[j] == vb[j-1])
                        tcb = 0;
                }
            }
        }
        if (tcb != taillechaine) {
            possible = false;
            break;
        }
        else if (newva[i-1] - vb[j-1] > 0) {
            possible = false;
            break;
        } else {
            if (vb.size()%k != 0) {
                possible = false;
                break;
            }
        }
        //vb.erase(vb.begin()+(j-tcb), vb.begin()+(j+tcb));
        //if (vb.size() == 0) break;
    }
    if (possible) cout << "Yes" << "\n";
    else cout << "No" << "\n";
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
