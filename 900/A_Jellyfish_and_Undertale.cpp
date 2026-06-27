#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a , b , n;
    cin >> a >> b >> n;
    vector<int> nums(n);
    for(int i=0 ; i<n ; i++) cin >> nums[i];

    long long maxTime = b - 1;
    for(int i = 0 ; i < n ; i++){
        if(nums[i] < a){
            maxTime += nums[i];
        }else
            maxTime += (a-1);
    }

    cout << maxTime + 1 << '\n';

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}