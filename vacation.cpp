#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;

    int v[n][3] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];

    int dp[n][3] = {0};
    dp[0][0] = v[0][0];
    dp[0][1] = v[0][1];
    dp[0][2] = v[0][2];
    for (int i = 1; i < n; i++) {
        dp[i][0] = v[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = v[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = v[i][2] + max(dp[i - 1][0], dp[i - 1][1]);
    }
    int ans =  max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
    cout << ans << endl;
}
