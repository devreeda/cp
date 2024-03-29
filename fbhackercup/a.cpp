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

bool isVoy(char freq)
{
    vector<int> v = {'A', 'E', 'I', 'O', 'U', 'Y'};
    for (char c : v)
    {
        if (freq == c)
            return false;
    }
    return true;
}

/*
g++ -std=c++11 -O2 -Wall a.cpp
*/
void solve()
{
    string s;
    cin >> s;
    //trouver la lettre la plus freq
    //determiner si c'est une consonne ou non
    //pour toutes les autres : si cons alors que voy (vis versa) +2 sinon +1
    vector<int> v(26, 0);
    for (char c : s)
        v[(int)(c - 'A')]++;
    int index = 0;
    int max = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (v[i] > max)
        {
            max = v[i];
            index = i;
        }
    }
    char freq = (char)(index + 'A');
    int num = 0;
    for (char c : s)
    {
        if (c != freq)
        {
            if (isVoy(c) == isVoy(freq))
                num += 2;
            else
                num++;
        }
    }
    cout << num << "\n";
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
        cout << "Case #" << i++ << ": ";
        solve();
    }
    myfile.close();

    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
