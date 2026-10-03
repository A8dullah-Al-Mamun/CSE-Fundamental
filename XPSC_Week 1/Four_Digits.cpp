#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    while (n.size() < 4)
    {
        n = "0" + n;
    }

    cout << n;

    return 0;
}