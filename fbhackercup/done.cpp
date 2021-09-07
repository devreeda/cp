#include <bits/stdc++.h>

using namespace std;

/*
const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;*/

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)

void printV(vi v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v.at(i) << " ";
    cout << "\n";
}
ifstream input;
ofstream myfile;

/*
g++ -std=c++11 -O2 -Wall a.cpp
*/
void solve()
{
    int n;
    input >> n;
    string s;
    input >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'A')
            ++a;
        else
            ++b;
    }
    if (abs(a - b) != 1)
        myfile << 'N' << "\n";
    else
        myfile << 'Y' << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    input.open("input.txt");

    int tt;
    input >> tt;
    int i = 1;
    myfile.open("output.txt");
    while (tt--)
    {
        myfile << "Case #" << i++ << ": ";
        solve();
    }

    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
