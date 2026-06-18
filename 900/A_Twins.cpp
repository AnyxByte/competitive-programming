#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> coins(n);
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }

    sort(coins.begin(),coins.end());
    int count = 0;
    int sumCoin = 0;
    for (int i = n-1; i>=0; i--)
    {
        sumCoin += coins[i];
        count++;
        if(sumCoin <= (sum - coins[i])){
            sum = sum - coins[i];
        }else break;
    }

    cout << count ;
    
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