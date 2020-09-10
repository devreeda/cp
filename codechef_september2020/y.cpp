#include <bits/stdc++.h>
//#include "stdc++.h"
using namespace std;
typedef long long ll;


/**
 * getline(cin, s)
 * "\n" plus rapide que "endl"
 * Si le nombre de données est inconnu :
 * while (cin >> x) {
    // code
    }    
 * use long long insted of int
 * */

int main() {
    // solution comes here
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    //test cases
    for (int x = 0; x<t; x++) {
        ll N;
        cin >> N;
        vector<int> v;
        for (int i = 0; i<N; ++i) {
            for (int j = 0; j<N; ++j) {
                int num;
                cin >> num;
                if (i==0) v.push_back(num);
            }
        }
        vector<int> realV;
        for (int i = 1; i< N; ++i) realV.push_back(i);

        bool state = true;
        int moves = 0;
        for (int i = N; i> 1; i--) {
            if (v.at(i-1) != i) {
                if (state) {
                    state = !state;
                    moves++;
                }
            } else {
                if (!state) {
                    state = !state;
                    moves++;
                }
            }
        }
        cout << moves << "\n";
    }
}

