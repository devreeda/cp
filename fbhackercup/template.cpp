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

ofstream myfile;

void printV(vi v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v.at(i) << " ";
    cout << "\n";
}

/*
g++ -std=c++11 -O2 -Wall a.cpp
*/
void solve()
{
    int n;
    cin >> n;
    string in, out;
    cin >> in >> out;
    vector<vector<char>> v(n, vector<char>(n));
    for (int i = 0; i < n; ++i)
    {
        bool isdead = false;
        v[i][i] = 'Y';
        if (out[i] == 'N')
            isdead = true;
        //de i jusqu'à 0
        for (int j = i - 1; j >= 0; --j)
        {
            if (isdead)
            {
                v[i][j] = 'N';
                continue;
            }
            if (in[j] == 'N')
            {
                v[i][j] = 'N';
                isdead = true;
                continue;
            }
            v[i][j] = 'Y';
            if (out[j] == 'N')
                isdead = true;
        }
        isdead = false;
        if (out[i] == 'N')
            isdead = true;
        //de i + 1 jusqu'à n
        for (int j = i + 1; j < n; ++j)
        {
            if (isdead)
            {
                v[i][j] = 'N';
                continue;
            }
            if (in[j] == 'N')
            {
                v[i][j] = 'N';
                isdead = true;
                continue;
            }
            v[i][j] = 'Y';
            if (out[j] == 'N')
                isdead = true;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            myfile << v[i][j];
        }
        myfile << "\n";
    }
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

    int tt;
    cin >> tt;
    int i = 1;

    myfile.open("output.txt");
    while (tt--)
    {
        myfile << "Case #" << i++ << ":\n";
        solve();
    }
    myfile.close();

    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
