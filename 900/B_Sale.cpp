#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());
    int maxSum = 0;
    int i = 0;
    while (i < m)
    {
        if (nums[i] < 0)
        {
            maxSum += nums[i];
            i++;
        }
        else
            break;
    }

    cout << maxSum * (-1);
}

int main()
{
    // int n int t;
    //  cin >> t;
    //  while(t--) {
    solve();
    // }
    return 0;
}