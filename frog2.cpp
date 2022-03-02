#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    long long dp[n + 1] = {0};
    dp[0] = 1e9; 
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + abs(v[i] - v[i - 1]);
        for (int j = 2; j <= k; j++) {
            if (i - j < 1) break;
            dp[i] = min(dp[i], dp[i - j] + abs(v[i] - v[i - j]));
        }
    }
    cout << dp[n] << endl;

}
