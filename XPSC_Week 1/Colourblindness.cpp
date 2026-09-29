#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string r1, r2;
        cin >> r1 >> r2;

        bool consider = true;
        for (int i = 0; i < n; i++)
        {
            char c1 = r1[i];
            char c2 = r2[i];

            if (c1 == 'R' && c2 != 'R')
            {
                consider = false;
                break;
            }
            if (c1 != 'R' && c2 == 'R')
            {
                consider = false;
                break;
            }
        }

        if (consider)
        {
            cout << "yEs" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}