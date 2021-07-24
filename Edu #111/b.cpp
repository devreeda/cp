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

/*
g++ -std=c++11 -O2 -Wall a.cpp
*/
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int z = 0, o = 0;
    string s;
    for (int i = 0; i < n; ++i)
    {
        char x;
        cin >> x;
        if (x == '0')
            z++;
        else
            o++;
        s += x;
    }
    int sum = 0;
    if (a < 0)
    {
        for (int i = 0; i < n; ++i)
            sum += a + b;
    }
    else if (a == 0)
    {
        if (b < 0)
        {
            if (z > o)
            {
                while (s.size() > 0)
                {
                }
            }
            else
            {
            }
        }
        else if (b == 0)
        {
            cout << 0 << "\n";
            return;
        }
        else
        {
            for (int i = 0; i < n; ++o)
                sum += b;
        }
    }
    else
    {
        if (z > o)
        {
        }
        else
        {
        }
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
    while (tt--)
    {
        solve();
    }

    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
