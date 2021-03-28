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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    int a = 0;
    while (a < n && s[a] != '*')
        ++a;
    if (s[a] == '*')
    {
        s[a] = 'x';
        ans++;
    }
    int indexDepart = a;
    int indexArrivee = -1;
    a = n - 1;
    while (a >= 0 && s[a] != '*')
        --a;
    if (s[a] == '*')
    {
        s[a] = 'x';
        ans++;
        indexArrivee = a;
    }

    int i = indexDepart;
    int ecart = 0;

    if (ans < 2)
    {
        cout << 1 << endl;
        return;
    }

    string s2 = s;
    int ans2 = ans;

    //Test 1
    while (i < indexArrivee)
    {
        if (ecart == k)
        {
            while (s[i] != '*')
                --i;
            s[i] = 'x';
            ecart = 0;
            ans++;
        }
        if (s[i] != 'x')
        {
            ecart++;
            ++i;
        }
        else
        {
            ecart = 0;
            ++i;
        }
    }

    //test 2
    reverse(s2.begin(), s2.end());
    i = n - (indexDepart + 1);
    while (i < n - (indexArrivee))
    {
        if (ecart == k)
        {
            while (s2[i] != '*')
                --i;
            s2[i] = 'x';
            ecart = 0;
            ans2++;
        }
        if (s2[i] != 'x')
        {
            ecart++;
            ++i;
        }
        else
        {
            ecart = 0;
            ++i;
        }
    }
    //if (ans < ans2)
    cout << ans << endl;
    //else
    //  cout << ans2 << endl;
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
