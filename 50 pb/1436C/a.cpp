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

bool binarySearch(vi a, int x) {
    int left = 0, right = a.size();
    while (left < right) {
        int middle = (left+right)/2;
        if (a[middle] <= x)
            left = middle+1;
        else 
            right = middle;
    }
    if (left > 0 && a[left-1] == x)
        return true;
    return false;
}

void solve() {
    int n, x, pos;
    cin >> n >> x >> pos;
    /*
    int nbpossibilites = 0;
    int l = 0, r = n;
    int currentPos = (l+r)/2;
    while (currentPos != pos) {
        //if (currentPos < pos) 
    }*/

    cout << 15/2 <<endl;

    //Remplir un tableau trié avec des nombres de 1 à N
    //Compter les opérations binaires de recherche pour le nombre "pos"
    //En particulier, les 
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
