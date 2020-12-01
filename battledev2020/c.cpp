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
g++ -std=c++11 -O2 -Wall f.cpp
*/

void solve() {
    int n; cin >> n;
    vi reponse = {1,0,0,0,0,0,0,0,0,0};
    vi inf;
    vi temp;
    vector<pair<int,int>> agents;
    int index = 1;
    for (int i = 0; i<n-1; ++i) {
        int a, b;
        cin >> a >> b;
        agents.push_back({a,b});
        if (b == 0) inf.push_back(a);
    }
    reponse[index] += inf.size();
    //int k = 0;
    while (inf.size() > 0) {
        for (int i = 0; i<inf.size(); ++i) {
            for (int j = 0; j<agents.size();++j) {
                if (agents[j].second == inf[i]) {
                    temp.push_back(agents[j].first);
                }
            }
        }

        inf.assign(temp.begin(),temp.end());
        temp = {};
        index++;
        reponse[index] += inf.size();
        //cout <<  inf.size() << endl;
        /*
        for (int i = 0; i<inf.size(); ++i) {
            cout << inf[i] << " ";
        }
        cout << "\n";*/
    }
    for (int i = 0; i<reponse.size(); ++i) {
        cout << reponse[i] << " ";
    }
    cout << "\n";
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
