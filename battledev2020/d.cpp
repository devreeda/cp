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

/*
g++ -std=c++11 -O2 -Wall f.cpp
*/
/*
int answer(int li, int length, vi v) {
    int checksum= 0;
    for (int i = length; i>0; --i) {
        checksum = checksum^(getXOR(v[li]+v[i-1])^getXOR(v[li]-1));

    }
}

int getXOR(int x) {
    vi result = {x,1,x+1,0};
    return result[x%4];
}

def answer(start, length):
    checkSum = 0
    for l in range(length, 0, -1):
        checkSum = checkSum ^ (getXor(start + l-1) ^ getXor(start-1))
        start = start + length
    return checkSum

def getXor(x):
    result = [x, 1, x+1, 0]
    return result[x % 4]

*/
int subSetXORSum(vi arr, int n) {
   int bitOR = 0;
   for (int i=0; i < n; ++i)
   bitOR |= arr[i];
   return (bitOR);
}

// Function to return the XOR of elements 
// from the range [1, n] 
int findXOR(int n) 
{ 
    int mod = n % 4; 
  
    // If n is a multiple of 4 
    if (mod == 0) 
        return n; 
  
    // If n % 4 gives remainder 1 
    else if (mod == 1) 
        return 1; 
  
    // If n % 4 gives remainder 2 
    else if (mod == 2) 
        return n + 1; 
  
    // If n % 4 gives remainder 3 
    else 
        return 0; 
} 
  
// Function to return the XOR of elements 
// from the range [l, r] 
int findXOR(int l, int r) 
{ 
    return (findXOR(l - 1) ^ findXOR(r)); 
} 

void solve() {
    int n,m; cin >>n>>m;
    vi cle;
    vi reponse;
    for (int i = 0;i<256;++i) {
        reponse.push_back(0);
    }
    for (int i = 0; i<n; ++i) {
        int num;cin>>num;
        cle.push_back(num);
    }
    vector<pair<int,int>> vp;    
    for (int i = 0;i<m; ++i) {
        int li, ri;cin >>li >>ri;
        vp.push_back({li,ri});
        /*
        int a = cle[li];
        for (int j = li+1; j<=ri; ++j) {
            a = a^cle[j];
        }
        reponse[a] += 1;*/
    }
    int s = 22+33+44;
    cout << findXOR(s) << endl;
/*
    sort(vp.begin(),vp.end());

    for (int i = 0; i<cle.size();++i) {
        for (int j =  0; j<vp.size();++j) {
            if (cle[i] == vp[j].)
        }
    }
    for (int i = 0;i<reponse.size();++i) {
        cout << reponse[i] << " "; 
    }
    cout << "\n";*/
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
