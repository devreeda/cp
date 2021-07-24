#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 2; i <= n; ++i)
    {
        string phrase;
        getline(cin, phrase);
        int d = (i % 2 == 0) ? 3 * i : -5 * i;
        string ans = "";
        for (int j = 0; j < (int)phrase.size(); ++j)
        {
            if (!isalpha(phrase[j]))
            {
                ans += phrase[j];
                continue;
            }
            if (isupper(phrase[j]))
            {
                int c = phrase[j] - d;
                if (c < 'A')
                {
                    c = ('Z' + (c - 'A' + 1) % ('Z' - 'A' + 1));
                }
                else
                {
                    c = ('A' + (c - 'A') % ('Z' - 'A' + 1));
                }
                ans += (char)c;
            }
            else
            {
                int c = phrase[j] - d;
                if (c < 'a')
                {
                    c = ('z' + (c - 'a' + 1) % ('z' - 'a' + 1));
                }
                else
                {
                    c = ('a' + (c - 'a') % ('z' - 'a' + 1));
                }
                ans += (char)c;
            }
        }
        cout << ans << "\n";
    }
}