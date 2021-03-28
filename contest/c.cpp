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
    string a, b;
    cin >> a >> b;
    int ans = 0;
    string a2 = a;
    string b2 = b;
    int ans2 = 0;
    //test1
    if (a.size() > b.size())
    {
        size_t found = a.find(b);
        while (found == string::npos)
        {
            b.pop_back();
            ans++;
            found = a.find(b);
        }
        ans += a.size() - b.size();
    }
    else if (a.size() < b.size())
    {
        size_t found = b.find(a);
        while (found == string::npos)
        {
            a.pop_back();
            ans++;
            found = b.find(a);
        }
        ans += b.size() - a.size();
    }
    else
    {
        string ax = a, bx = b;
        int ansx = ans;
        size_t found = a.find(b);
        while (found == string::npos)
        {
            b.pop_back();
            ans++;
            found = a.find(b);
        }
        ans += a.size() - b.size();

        found = ax.find(bx);
        while (found == string::npos)
        {
            bx.pop_back();
            ansx++;
            found = ax.find(bx);
        }
        ansx += ax.size() - bx.size();

        if (ansx < ans)
            ans = ansx;
    }

    //test2
    if (a2.size() > b2.size())
    {
        size_t found = a2.find(b2);
        while (found == string::npos)
        {
            b2.erase(b2.begin());
            ans2++;
            found = a2.find(b2);
        }
        ans2 += +a2.size() - b2.size();
    }
    else if (a2.size() < b2.size())
    {
        size_t found = b2.find(a2);
        while (found == string::npos)
        {
            a2.erase(a2.begin());
            ans2++;
            found = b2.find(a2);
        }
        ans2 = ans2 + b2.size() - a2.size();
    }
    else
    {
        string ax = a2, bx = b2;
        int ansx = ans2;
        size_t found = a2.find(b2);
        while (found == string::npos)
        {
            b2.pop_back();
            ans2++;
            found = a2.find(b2);
        }
        ans2 += a2.size() - b2.size();

        found = ax.find(bx);
        while (found == string::npos)
        {
            bx.pop_back();
            ansx++;
            found = ax.find(bx);
        }
        ansx += ax.size() - bx.size();

        if (ansx < ans2)
            ans2 = ansx;
    }
    if (ans < ans2)
        cout << ans << endl;
    else
        cout << ans2 << endl;
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
