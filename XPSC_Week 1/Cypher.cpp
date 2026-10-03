#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> original(n);
        for (int i = 0; i < n; i++)
        {
            ll b;
            cin >> b;
            string moves;
            cin >> moves;

            ll current = a[i];
            for (int j = b - 1; j >= 0; j--)
            {
                if (moves[j] == 'U')
                {
                    current = (current - 1 + 10) % 10;
                }
                else
                {
                    current = (current + 1) % 10;
                }
            }

            original[i] = current;
        }

        for (int i = 0; i < n; i++)
        {
            cout << original[i];

            if (i == n - 1)
            {
                cout << "";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}