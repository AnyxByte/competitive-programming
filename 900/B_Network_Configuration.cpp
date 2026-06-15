#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        nums.push_back(no);
    }

    sort(nums.begin(), nums.end());
    int reqNum = nums[n - 1];
    int minNum = 1;
    for (int i = n - 2; i >= 0; --i)
    {
        if (nums[i] <= reqNum && minNum < k)
        {
            reqNum = nums[i];
            minNum++;
        }

        if (minNum == k)
        {
            cout << reqNum;
            return;
        }
    }

    cout << reqNum;
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