#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << " " << 0 << '\n';
        return;
    }

    long long max_excitement = abs(a - b);

    long long rem = a % max_excitement;
    long long steps = min(rem, max_excitement - rem);

    cout << max_excitement << " " << steps << '\n';
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