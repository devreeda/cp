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
    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cost = 0;
    for (int i = 0; i < n; ++i)
    {
        int j = i;
        int jmax = j;
        int jval = v[j];
        while (j < n)
        {
            if (jval > v[j])
            {
                jval = v[j];
                jmax = j;
            }
            ++j;
        }
        if (v[i] > v[jmax])
        {
            vi v2 = v;
            for (int k = 0; k < (jmax - i) / 2; k++)
            {
                int temp = v2[jmax - k];
                v2[jmax - k] = v[i + k];
                v[i + k] = temp;
            }
            v = v2;

            //int temp = v[i];
            //v[i] = v[jmax];
            //v[jmax] = temp;
            //cout << v[i] << " " << v[jmax] << endl;
            //cout << " cost  : " << jmax - i + 1 << endl;
        }
        //vi v2 = v;
        //sort(v2.begin(), v2.end());
        //printV(v);

        cost += jmax - i + 1;
    }
    cout << cost << endl;
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
