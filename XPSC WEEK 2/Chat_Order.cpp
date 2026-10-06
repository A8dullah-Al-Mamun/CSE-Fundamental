#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> msg(n);
    for (int i = 0; i < n; i++)
    {
        cin >> msg[i];
    }

    map<string, bool> used;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!used[msg[i]])
        {
            cout << msg[i] << endl;
            used[msg[i]] = true;
        }
    }

    return 0;
}