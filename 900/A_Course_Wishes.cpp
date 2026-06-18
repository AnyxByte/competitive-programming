#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> capacity(k+1) , b(n+1);
    for(int i=1; i<=k; i++) cin >> capacity[i];
    for(int i=1; i<=n; i++) cin >> b[i];

    
    vector<int> ops;
    for(int level = k ; level >= 1 ; level--){


        for(int i=1 ; i<= n ; i++){
            if(b[i] == level){
                while (b[i] < k+1)
                {
                    b[i]++;
                    ops.push_back(i);
                }
                
            }
        }
    }

    cout << ops.size() << '\n';
    for(int i=0 ; i < ops.size();i++){
        cout << ops[i] << " ";
    }
    cout << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}