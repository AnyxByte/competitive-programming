#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long t, s, x;
    cin >> t >> s >> x;

    int series1 = x - t;
    long long series2 = x - (t + s + 1);
    if (series1 >= 0 && series1 % s == 0)
    {
        cout << "YES";
    }
    else if (series2 >= 0 && series2 % s == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    solve();
    return 0;
}