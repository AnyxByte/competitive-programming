#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int logSeg = 0;
    int count = 0;
    for(int i=0 ; i < n-1 ; i++){
        if(s[i] == s[i+1]){
            logSeg++;
            count= max(logSeg,count);
        }else logSeg = 0;
    }

    cout << count + 2 << '\n';
   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}