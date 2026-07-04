#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long x = -1;
    long long num = 0;
    for (int k = 2; k <= n; k++)
    {
        num = pow(2,k) - 1;
        if(n % num == 0){
            x = n / num;
            break;
        }
    }

    cout << x << '\n';
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