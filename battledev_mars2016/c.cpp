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
    //cout << n << endl;
    vi p;
    for (int i = 0; i<n; ++i) {
        int pi; cin >> pi;
        //cout << "pi : "<< i<<  " " <<pi << endl;
        p.push_back(pi);
    }
    vector<vector<string>> ps;
    for (int i = 0; i<n; ++i) {
        vector<string> vs;
        for (int j = 0; j<p[i]; ++j) {
            string s; cin >> s;
            //cout << "s : "<< i << "," <<j<<" - "<<s << endl;
            vs.push_back(s);
        }
        ps.push_back(vs);
    }
    int num = 0;
    int q; cin >> q;
    //cout << "q : "<<q << endl;
    //index de depart d'un composant
    int index = 0;
    for (int i = 0; i<q; ++i) {
        index = 0;
        bool isPipo = true;
        cin.ignore();
        string s; getline(cin,s);
        for (int j = 0; j<ps.size(); ++j) {
            if (index > s.size()) break;
            bool isIn = false;
            for (int k = 0; k<ps[i].size(); ++k) {
                //cout << 1 << " " << ps.at(j).at(k) << endl;
                //cout << 2 << " " << s.substr(index, ps.at(j).at(k).size()) << endl;
                if (index < s.size() && ps.at(j).at(k) == s.substr(index, ps.at(j).at(k).size())) {
                    isIn = true;
                    index += ps[j][k].size()+1;
                    break;
                }   
            }
            if (!isIn) {
                //cout << "pas izin" << endl;
                isPipo = false;
                break;
            }
        }
        if (!isPipo) {
            continue;
        }
        num += 1;
    }
    cout << num << "\n";
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
