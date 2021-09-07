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
ifstream input;

void printV(vi v)
{
    for (int i = 0; i < v.size(); ++i)
        myfile << v.at(i) << " ";
    myfile << "\n";
}

bool isVoy(char freq)
{
    vector<int> v = {'A', 'E', 'I', 'O', 'U'};
    for (char c : v)
    {
        if (freq == c)
            return true;
    }
    return false;
}

/*
g++ -std=c++11 -O2 -Wall a.cpp
*/
void solve()
{
    string s;
    input >> s;
    vector<int> v(26, 0);
    for (char c : s)
        v[(int)(c - 'A')]++;

    int voy = 0, cons = 0;
    int nbVoy = 0, nbCons = 0;
    int maxVoy = 0, maxCons = 0;
    int indexMaxVoy = 0, indexMaxCons = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (v[i] > 0)
        {
            if (isVoy((char)(i + 'A')))
            {
                ++voy;
                nbVoy += v[i];
                if (v[i] > maxVoy)
                {
                    maxVoy = v[i];
                    indexMaxVoy = i;
                }
            }
            else
            {
                ++cons;
                nbCons += v[i];
                if (v[i] > maxCons)
                {
                    maxCons = v[i];
                    indexMaxCons = i;
                }
            }
        }
    }
    if (voy + cons == 1)
    {
        myfile << 0 << "\n";
        return;
    }
    if (voy == 0 || cons == 0) //que des consonnes ou que des voyelles
    {
        //on cherche le plus freq

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

        myfile << min(s.size(), (s.size() - max) * 2) << "\n";
    }
    else if (nbVoy - maxVoy > nbCons - maxCons)
    {
        int index = 0;
        int max = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (v[i] > max && !isVoy(i + 'A'))
            {
                max = v[i];
                index = i;
            }
        }
        myfile << (nbCons - max) * 2 + nbVoy << "\n";
    }
    else
    {
        int index = 0;
        int max = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (v[i] > max && isVoy(i + 'A'))
            {
                max = v[i];
                index = i;
            }
        }
        myfile << (nbVoy - max) * 2 + nbCons << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    input.tie(0);
    myfile.tie(0);
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
    myfile.close();

    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
