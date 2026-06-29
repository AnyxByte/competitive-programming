#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int i = 0 , j = 1;
    while(i < n && j < n){
        if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
            s.erase(i,2);
            n = n - 2;
            if(i !=0 && j != 1){
                i--; j--;
            }
        }else{
            i++; j++;
        }
    }

    cout << n ;
    
}

int main() {
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}