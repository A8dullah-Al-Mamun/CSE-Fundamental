#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll n;
    cin >> n;

    ll sum = 0, minOdd = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        sum += x;
        if (x % 2 != 0)
        {
            minOdd = min(minOdd, x);
        }
    }

    if (sum % 2 != 0)
    {
        sum -= minOdd;
    }
    cout << sum;

    return 0;
}