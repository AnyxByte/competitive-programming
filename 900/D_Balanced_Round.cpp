#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long n , k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++) cin >> nums[i];

    // sort
    sort(nums.begin(),nums.end());
    int count = 0;
    int maxProb = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(abs(nums[i] - nums[i+1]) <= k){
            count++;
            maxProb = max(count,maxProb);
        }else count=0;
    }

    cout << n - (maxProb + 1) << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}