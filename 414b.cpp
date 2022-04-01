#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int mod = 1000000007;
const int N = 2005;

int dp[N][N];
int f(int n, int k, int i) {
    if (k == 0)
        return 1;
    if (dp[i][k] != -1) return dp[i][k];
    int ans = 0;
    for (int j = i; j <= n; j += i) {
        ans += f(n, k - 1, j);
        ans %= mod;
    }
    return dp[i][k] = ans;
}

int32_t main() {
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += f(n, k - 1, i);
        ans %= mod;

    }
    cout << ans << endl;
}
