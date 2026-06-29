#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        if (n % 1000 == 144)
        {
            n = n / 1000;
        }
        else if (n % 100 == 14)
        {
            n = n / 100;
        }
        else if (n % 10 == 1)
        {
            n = n / 10;
        }
        else
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--) {
    solve();
    // }
    return 0;
}