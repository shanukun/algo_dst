#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long

int32_t main() {
    int n, w;
    cin >> n >> w;
    int wt[n], vl[n];

    for (int i = 0; i < n; i++)
        cin >> wt[i] >> vl[i];

    int dp[n][w + 1];
    for (int i = 0; i < n; i++)
        dp[i][0] = 0;

    for (int i = 0; i <= w; i++) {
        if (wt[0] <= i)
            dp[0][i] = vl[0];
        else
            dp[0][i] = 0;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= w; j++) {
            int p = 0, q = 0;
            if (wt[i] <= j) p = vl[i] + dp[i - 1][j - wt[i]];
            q = dp[i - 1][j];
            dp[i][j] = max(p, q);
        }
    }

    cout << dp[n - 1][w] << endl;
}
