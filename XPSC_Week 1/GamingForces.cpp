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
        ll one_monster = 0;
        ll monsters = 0;

        for (int i = 0; i < n; i++)
        {
            ll h;
            cin >> h;
            if (h == 1)
            {
                one_monster++;
            }
            else
            {
                monsters++;
            }
        }

        ll ans = monsters + (one_monster / 2) + (one_monster % 2);
        cout << ans << endl;
    }
    return 0;
}