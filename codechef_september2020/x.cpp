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

bool isPowerOf2(ll n) {
    while (n%2 == 0) n /= 2;
    if (n == 1) return true;
    return false;
}

int main() {
    // solution comes here
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    //test cases
    for (int i = 0; i<t; i++) {
        ll a, b;
        cin >> a >> b;
        if (abs(a-b)%10 != 0) {
            cout << abs(a-b)/10+1 << endl;
        }
        else cout << abs(a-b)/10 << endl;
    }
}

