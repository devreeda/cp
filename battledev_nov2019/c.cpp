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
    int n, m; cin>>n>>m;
    vi v;
    for (int i = 0; i<n; ++i) {
        v.push_back(0);
    }
    vi reponse;
    vector<pair<int,int>> input;
    for (int i = 0; i<m;++i) {
        int d,f; cin >>d>>f;
        input.push_back({d,f});
    }
    sort(input.begin(), input.end());
    for (int i = 0; i<m; ++i) {
        //cout << input[i].first << " "<<input[i].second<< endl;
    }
    //int nleft = n;
    for (int i = 0; i<m;++i) {
        int d,f;
        d=input[i].first;
        f=input[i].second;
        for (int j = 0; j<n;++j) {
            //nouveau
            if (v[j] == 0 || d>=v[j]) {
                v[j] = f;
                reponse.push_back(j+1);
                //cout << j+1 << endl;
                break;
            }
        } 
    }
    if (n>=m) {
        for (int i  = 1; i<=m; ++i)
            cout << i << " ";
        cout << "\n";
    }
    else if (reponse.size() < m) cout << "pas possible" << "\n";
    else {
        for (int i = 0; i<reponse.size();++i)
            cout << reponse[i] << " ";
        cout << "\n";
    }
    //cout << reponse.size() << endl;
    //cout <<  m << endl;
    
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
