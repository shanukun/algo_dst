#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    long long dp[n + 1] = {0};
    dp[0] = 1e9; 
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + abs(v[i] - v[i - 1]);
        dp[i] = min(dp[i], dp[i - 2] + abs(v[i] - v[i - 2]));
    }
    cout << dp[n] << endl;

}
