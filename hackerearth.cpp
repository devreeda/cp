#include <bits/stdc++.h>

using namespace std;

/*
const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;*/

typedef long long ll;
typedef vector<int> vi;

/*
int printIndex(vi v, int l, int r, int num) {
    if (l-r <= 1) return r + 1;
	if (v.at((l+r)/2) == num) {
        //cout << (l+r)/2 << "\n";
		return (l+r)/2+1;
	}
	else if (v.at((l+r)/2) > num) {
        //cout << (l+r)/2 << "\n";
		printIndex(v, l, (l+r)/2, num);
	}
	else {
        //cout << (l+r)/2 << "\n";
		printIndex(v, (l+r)/2, r, num);
	}
}*/

void solve() {
	int n; cin>> n;
	vi v;
	for (int i =0; i<n; ++i) {
		int num;
		cin >> num; v.push_back(num);
	}
    if (v.at(0)>v.at(1)) {
        reverse(v.begin(), v.end());
    }
	int q;
    cin >> q;
    for (int i = 0; i<q; ++i) {
		int num; cin >> num;
		//cout << printIndex(v, 0, n-1, num) << "\n";
        int j = n/2, l = 0, r  = n-1;
        while (v.at(j) != num) {
            j = (r+l)/2;
            if (v.at(j) > num) 
                r = j-1;
            else l = j+1;
        }
        cout << j+1 << "\n";
	}
}

int main() {
	solve();
}
