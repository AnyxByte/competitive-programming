#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n == 1 || n ==2) cout << -1;
    else {
        for(int i = n ; i> 0 ; i--) cout << i << " ";
    }
}

int main() {
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}