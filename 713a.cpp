#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int dp[10000000];
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        char op;
        int n;
        cin >> op >> n;
        int num = 0;
        for (int i = 1; i <= 18; i++) {
            num = num * 2 + (n & 1);
            n /= 10;
        }
        if (op == '+')
            dp[num]++;
        else if (op == '-')
            dp[num]--;
        else 
            cout << dp[num] << endl;

        
    }
}
