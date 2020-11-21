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

//g++ -std=c++11 -O2 -Wall a.cpp

void solve() {
    int n; cin >> n;
    vector<pair<int, string>> vp;
    vector<string> v;
    /*
    for (int i = 0; i<n; ++i) {
        int jour; string heure; cin >> jour >> heure;
        v.push_back({jour, heure});
    }
    int currentDay = 1, currentHour = 00, currentMin, currentTime;
    for (int i = 0; i<n; ++i) {

    }*/
    for (int i = 0; i<n; ++i) {
        string jour; cin >> jour;
        v.push_back(jour);
    }
    sort(v.begin(), v.end());
    int currentDay = 1, currentHour = 00, currentMin, currentTime;
    int startDay = 1, startHour, startMin;
    int k = 0;
    //1 08:45-12:59
    //day = 0,0; hbegin = 2,2; mbegin = 5,2; hend = 8,2; mend = 11,2
    for (int i = 1; i<=5;++i) {
        currentDay = i, currentHour = 8, currentMin = 0, currentTime = 0;
        startDay = currentDay, startHour = currentHour, startMin = currentMin;
        int day = stoi(v.at(k).substr(0,0));
        int hbegin = stoi(v.at(k).substr(2,2));
        int mbegin = stoi(v.at(k).substr(5,2));
        int hend = stoi(v.at(k).substr(8,2));
        int mend = stoi(v.at(k).substr(11,2));
        while (currentHour < 19) {
            if (currentDay == day && currentHour == hbegin && currentMin == mbegin) {
                currentHour = hend+1, currentMin = (mend+1)%60;
                currentTime = 0;
                k++;
                day = stoi(v.at(k).substr(0,0));
                hbegin = stoi(v.at(k).substr(2,2));
                mbegin = stoi(v.at(k).substr(5,2));
                hend = stoi(v.at(k).substr(8,2));
                mend = stoi(v.at(k).substr(11,2));
                startDay = currentDay, startHour = currentHour, startMin = currentMin;
            } else {
                ++currentTime;
                currentMin = (currentMin + 1)%60;
                if (currentMin == 0) currentHour++;
            }
        }
        ++k;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    solve();


    /**
     * ALGORITHME DE TRI ET EN LEVER LES DUPLICATES
     * set<int> s( v.begin(), v.end() );
     * v.assign( s.begin(), s.end() );
     * */
}
