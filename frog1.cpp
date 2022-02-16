#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

long long dp[N];

long long mc(vector<int> &v, int n) {
    if (n == 0) return 0;
    if (n == 1) return abs(v[n] - v[n - 1]);
    if (dp[n] != -1) return dp[n];
    return dp[n] = 1LL * min(mc(v, n - 1) + abs(v[n] - v[n - 1]), 
            mc(v, n - 2) + abs(v[n] - v[n - 2]));
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << mc(v, n - 1);
}
