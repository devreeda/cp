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
    //bruteforce
    int n; cin >> n;
    vi v;
    int sumpos = 0, sumneg = 0, sum1 = 0;
    for (int i = 0; i<n; ++i) {
        int num;
        cin >> num;
        if (num != 0) {
            v.push_back(num);
            if (num > 1) ++sumpos;
            else if(num ==1) ++sum1;
            else ++sumneg;
        }
    }
    n = v.size();
    if (v.size() < 5) cout << 0 << "\n";
    /*
    int max = v[0]*v[1]*v[2]*v[3]*v[4];
    for (int i = 1; i<n-5; ++i) {
        if (v[i]*v[i+1]*v[i+2]*v[i+3]*v[i+4] > max) max = v[i]*v[i+1]*v[i+2]*v[i+3]*v[i+4];
    }
    cout << max << "\n";*/


/*
    int i1 = v.at(n-5), i2 = v.at(n-4), i3 = v.at(n-3), i4 = v.at(n-2), i5 = v.at(n-1);
    int idx1 = n-5, idx2 = n-4, idx3 = n-3, idx4 = n-2, idx5 = n-1;
    int max = -(1e5 + 5);
    for (int i  = 0; i<n-5; ++i) {
        if (i1*i2*i3*i4*i5 < i2*i3*i4*i5*v.at(i)) {
            i1 = v.at(i);
            idx1 = i;
        }
    }
    for (int i  = 0; i<n-4; ++i) {
        if (i != idx1) {
            if (i1*i2*i3*i4*i5 < i1*i3*i4*i5*v.at(i)) {
                i1 = v.at(i);
                idx1 = i;
            }
        }
    }
    for (int i  = 0; i<n-3; ++i) {
        if (i != idx1 && i != idx2) {

            if (i1*i2*i3*i4*i5 < i2*i1*i4*i5*v.at(i)) {
                i1 = v.at(i);
                idx1 = i;
            }
        }
    }
    for (int i  = 0; i<n-2; ++i) {
        if (i != idx1 && i != idx2 && i != idx3) {

            if (i1*i2*i3*i4*i5 < i2*i3*i1*i5*v.at(i)) {
                i1 = v.at(i);
                idx1 = i;
            }
        }
    }
    for (int i  = 0; i<n-1; ++i) {
        if (i != idx1 && i != idx2 && i!= idx3 &&  i != idx4) {

            if (i1*i2*i3*i4*i5 < i2*i3*i4*i1*v.at(i)) {
                i1 = v.at(i);
                idx1 = i;
            }
        }
    }
    int prod = i1*i2*i3*i4*i5;
    cout <<prod << "\n";
    */

   //tant que le tableau.size() < 5
    //tant que max = positif
        //tab += max.index
    //if tab.size() == 5  break  :
    //else
        //if ((5-tab.size())%2 == 0)
            //on cherche les nombres négatifs les plus gros
        //sinon
            //on cherche les nombres négatifs les plus petits
    else {
        vi prod;
        while (prod.size() < 5) {
            //cout << "bibi" << endl;
            int max = 0;
            //bool ok = true;
            if (prod.size() < sumpos) {
                for (int i = 0; i<n; ++i) {
                    if (v.at(i) > v.at(max)) max = i;
                }
                    prod.push_back(v.at(max));
                    v.erase(v.begin()+max);
                    n = v.size();
            } else {
                
                if ((5-sumpos-sum1)%2 == 0) {
                    int np = prod.size();
                    for (int i = 0; i<np; ++i) {
                        if (prod[i] == 1) {prod.erase(prod.begin()+i); np--;i--;}
                    }
                    //trouver les plus grand abs(nombre négatif)
                    for (int i = 0; i<n; ++i) {
                        if (abs(v.at(i)) > abs(v.at(max))) max = i;
                    }
                    prod.push_back(v.at(max));
                    v.erase(v.begin()+max);
                    n = v.size();
                } else {
                    //cout << n << endl;
                    //trouver les plus petit abs(nombre négatif)
                    for (int i = 0; i<n; ++i) {
                        if (v.at(i) > v.at(max)) max = i;
                        //cout << max << endl;
                    }
                    prod.push_back(v.at(max));
                    v.erase(v.begin()+max);
                    n--;
                    //cout << n << " " << prod.size() << endl;
                    max = 0;
                }
            }
        }
        cout << prod[0]* prod[1]* prod[2]* prod[3]* prod[4] << "\n";
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
