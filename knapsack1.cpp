#include <bits/stdc++.h>
using namespace std;
int wt[107], vl[107];

long long dp[107][100007];
long long knap(int w, int i) {
    if (w == 0) return 0;
    if (i < 0) return 0; 
    if (dp[i][w] != -1) return dp[i][w];

    long long mx = knap(w, i - 1);
    if (w - wt[i] >= 0)
        mx = max(mx, vl[i] + knap(w - wt[i], i - 1));
    return dp[i][w] = mx;
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++) 
        cin >> wt[i] >> vl[i];
    cout << knap(w, n - 1) << endl;
}
