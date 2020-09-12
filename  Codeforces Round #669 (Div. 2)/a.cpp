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

void solve() {
    int n; cin >> n;
    vi v;
    for (int i = 0; i<n; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int sumev = 0, sumod = 0;
    vi ve, vo;
    for (int i =0; i<n; ++i) {
        if (i%2 == 0) {
            sumev+=v.at(i);
            ve.push_back(v.at(i));
        } else {
            sumod+=v.at(i);
            vo.push_back(v.at(i));
        }
    }

    printV(ve);
    printV(vo);
    //si sumev > sumod
        //while (i<sumev.size() && sumev != sumod)
            //if (sumev.at(i) == 1) sumev.remove_at(i)
    //sinon sumod > sumev

    while (sumev != sumod) {
        cout << "inf" << endl;
        int i = 0;
        if (sumev > sumod) {
            while (i<ve.size() && sumev > sumod) {
                if (ve.at(i) == 1)  {
                    ve.erase(ve.begin() + i);
                    sumev--;
                }
                ++i;
            }
        } else {
            while (i<vo.size() && sumev < sumod) {
                if (vo.at(i) == 1)  {
                    vo.erase(vo.begin() + i);
                    sumod--;
                }
            }
            ++i;
        }
    }
    for (int i = 0; i<ve.size()+vo.size(); ++i) {
        if (i%2 == 0) 
            cout << ve.at(i) << " ";
        else cout << vo.at(i) << " ";
    }
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
