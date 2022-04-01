#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
int solve(vector<int> &A, int B) {
    int n = A.size();
    vector<vector<bool>> dp(n, vector<bool>(B + 1, false));
    for (int i = 0; i <= B; i++)
        if (i == A[0])
            dp[0][i] = true;
    for (int i = 0; i < n; i++)
        dp[i][0] = true;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= B; j++) {
            bool p = false, q = false;
            if (A[i] <= j)
                p = dp[i - 1][j - A[i]];
            q = dp[i - 1][j];
            dp[i][j] = p || q;
        }
    }
    return dp[n - 1][B];
}

int32_t main() {
    vector<int> v{3, 34, 4, 12, 5, 2};
    int B = 9;
    cout << solve(v, B) << endl;

}
