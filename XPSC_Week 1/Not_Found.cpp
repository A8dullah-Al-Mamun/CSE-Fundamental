#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++)
    {
        if (count(s.begin(), s.end(), 'a' + i) == 0)
        {
            cout << char('a' + i);
            return 0;
        }
    }
    cout << "None";

    return 0;
}