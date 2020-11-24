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

vi decale(vi v) {
    int temp = v[0];
    for (int i = 0;i<v.size()-1;++i) {
        v[i] = v[i+1];
    }
    v[v.size()-1] = temp;
    return v;
}

vi incremente(vi v) {
    for (int i = 0; i<v.size(); ++i) {
        v[i] = v[i]%26+1;
    }
    return v;
}

int nbLettreCommuns(vi a, vi b) {
    int curr =0;
    for (int j = 0; j<a.size();++j) {
        if (a[j] == b[j]) curr++;
    }
    return curr;
}

vi sol(vi a, vi b) {
    int curr  = nbLettreCommuns(a,b); 
    int max= nbLettreCommuns(a,b);
    vi vmax = a;
    //décalage
    for (int i = 0; i<a.size(); ++i) {
        cout << "i"<<i <<endl; 
        //incrémentation
        for (int j = 0; j<26;++j) {
            cout << "j "<<j <<endl;
            a = incremente(a);
            curr = nbLettreCommuns(a,b);
            if (curr>max) {
                max = curr;
                vmax = a;
            }
        }
        a = decale(a);
    }
    cout << "done" << endl;
    return vmax;
}

//g++ -std=c++11 -O2 -Wall a.cpp

void solve() {
    int n; cin >> n;
    string as,bs; cin >> as >> bs;
    vi a,b;
    for (int i = 0;i<n;++i) {
        a.push_back((int)as[i]-96);
        b.push_back((int)bs[i]-96);
    }
    a = sol(a,b);
    string sa = "";
    for (int i = 0; i<a.size();++i) {
        sa += (char)(a.at(i)+96);
    }
    cout << sa << "\n";
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
