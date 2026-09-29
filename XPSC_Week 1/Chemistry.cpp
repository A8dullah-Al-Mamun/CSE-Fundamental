#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int lower_alpha[26] = {};

        for (char c : s)
        {
            lower_alpha[c - 'a']++;
        }

        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (lower_alpha[i] % 2 != 0)
            {
                odd++;
            }
        }

        if (odd - k <= 1)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}