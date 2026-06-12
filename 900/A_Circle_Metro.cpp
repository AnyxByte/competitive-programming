#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    int startA = a;
    int startB = b;
    if(a == n) a = 1;
    else a++;
    if(b == 1) b = n;
    else b--;
    while (a != x && b != y)
    {
        if (a == b)
        {
            cout << "YES";
            return;
        }

        if (a == n)
            a = 1;
        else
            a++;
        if (b == 1)
            b = n;
        else
            b--;
    }

    if (a == b)
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
    // int t;
    // cin >> t;
    // while(t--) {
    solve();
    // }
    return 0;
}