#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> nums(n,0);

    if (n - k < k)
    {
        // right
        while (k < n+1)
        {
            if(nums[k-1] == 0){
                cout << "PRINT " << s[k - 1] << '\n';
                nums[k-1] = 1;
            }
            if(k < n) cout << "RIGHT" << '\n';
            k++;
        }
        //left
        k--;
        while(k >= 1){
            if(nums[k-1] == 0){
                cout << "PRINT " << s[k - 1] << '\n';
                nums[k-1] = 1;
            }
            if(k > 1) cout << "LEFT" << '\n';
            k--;
        }
    }else{
         while(k >= 1){
            if(nums[k-1] == 0){
                cout << "PRINT " << s[k - 1] << '\n';
                nums[k-1] = 1;
            }
            if(k > 1) cout << "LEFT" << '\n';
            k--;
        }
        k++;
        while(k < n+1){
            if(nums[k-1] == 0){
                cout << "PRINT " << s[k - 1] << '\n';
                nums[k-1] = 1;
            }
            if(k < n) cout << "RIGHT" << '\n';
            k++;
        }
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