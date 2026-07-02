#include <bits/stdc++.h>
using namespace std;

int minSteps(string s, char secondLast, char last)
{
    int n = s.size();
    int i = n - 1;
    int steps = 0;
    while (i >= 0 && s[i] != last)
    {
        i--;
        steps++;
    }

    if (i < 0)
        return INT_MAX;

    i--;
    while (i >= 0 && s[i] != secondLast)
    {
        i--;
        steps++;
    }

    if (i < 0)
        return INT_MAX;

    return steps++;
}

void solve()
{
    string str;
    cin >> str;

    int ans = INT_MAX;

    ans = min(ans, minSteps(str, '0', '0'));
    ans = min(ans, minSteps(str, '2', '5'));
    ans = min(ans, minSteps(str, '5', '0'));
    ans = min(ans, minSteps(str, '7', '5'));

    cout << ans << '\n';
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