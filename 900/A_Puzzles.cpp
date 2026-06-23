#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(m);
    for (int i = 0; i < m; i++)
        cin >> nums[i];
    int reqDiff = INT_MAX;
    sort(nums.begin(), nums.end());
    int i = 0, j = n - 1;
    while (i < m && j < m)
    {
        reqDiff = min(reqDiff, nums[j] - nums[i]);
        i++;
        j++;
    }

    cout << reqDiff;
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