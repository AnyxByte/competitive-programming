#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char ch;
    string s;
    cin >> n;
    cin >> ch;
    cin >> s;
    vector<char> str;
    for (int m = 0; m < 2 * n; m++)
    {
        str.push_back(s[m % n]);
    }

    int i = 0;
    int steps = 0, minTime = 0;
    while (i < n)
    {
        if (str[i] == ch)
        {
            for (int j = i; j < str.size(); j++)
            {
                if (str[j] == 'g')
                {
                    steps = 0;
                    i = j + 1;
                    break;
                }
                steps++;
                minTime = max(minTime, steps);
            }
        }
        else
        {
            i++;
        }
    }

    cout << minTime << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}