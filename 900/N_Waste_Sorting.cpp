#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int paper , plastic , general;
    cin >> paper >> plastic >> general;
    vector<long> nums(5);
    for(int i=0; i< 5 ; i++){
        cin >> nums[i];
    }
    int semiPaper = nums[3];
    int semiPlastic = nums[4];

    while(paper >= nums[0] && plastic >= nums[1] && general >= nums[2]){
        if(semiPaper >0){
            int limit = paper - nums[0];
            if(semiPaper > limit){
                nums[0] = nums[0] + limit;
                semiPaper = semiPaper - limit;
            }else{
                nums[0] = nums[0] + limit;
                semiPaper = 0;
                nums[3] = 0;
            }
        }

        if(semiPlastic > 0){
            int limit = plastic - nums[1];
            if(semiPlastic > limit){
                nums[1] = nums[1] + limit;
                semiPlastic = semiPlastic - limit;
            }else{
                nums[1] = nums[1] + limit;
                semiPlastic = 0;
                nums[4] = 0;
            }
        }

        if(semiPlastic > 0 || semiPaper > 0){
            nums[2] = nums[2] + semiPlastic + semiPaper;
        }

        break;

    }

    if(paper >= nums[0] && plastic >= nums[1] && general >= nums[2]){
        cout << "YES" << "\n";
    }else cout << "NO" << "\n";

    
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}