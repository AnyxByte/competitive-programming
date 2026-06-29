#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    vector<int> arr(12);
    cin >> k;
    for(int i = 0 ; i < 12 ; i++) cin >> arr[i];

    if(k == 0){
        cout << 0 ;
        return;
    }

    sort(arr.begin(),arr.end());
    int op = 0;
    int sum = 0;
    for(int i=11; i>= 0 ; i--){
        sum += arr[i];
        op++;
        if(sum >= k){
            cout << op ;
            return;
        }
    }

    if(sum < k){
        cout << -1;
    }else cout << op;
}

int main() {
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}