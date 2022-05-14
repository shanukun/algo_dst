#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, t;
    cin >> s >> t;
    int n = sz(s);
    int m = sz(t);

    int dp[n][m];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i] == t[j]) {
                dp[i][j] = 1;
                if (i - 1 >= 0 && j - 1 >= 0) dp[i][j] += dp[i - 1][j - 1];
            } else {
                int p = 0, q = 0;
                if (i - 1 >= 0) p = dp[i - 1][j];
                if (j - 1 >= 0) q = dp[i][j - 1];
                dp[i][j] = max(p, q);
            }
        }
    }
    cout << dp[n - 1][m - 1] << endl;
}
