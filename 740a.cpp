#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int n, a, b, c;
int dp[50];
int mc(int num) {
    if (num == 0) return 0;
    if (dp[num] != -1) return dp[num];
    int cost = 0;
    if (num - 1 >= 0)
        cost = a + mc(num - 1);
    if (num - 2 >= 0)
        cost = min(cost, b + mc(num - 2));
    if (num - 3 >= 0)
        cost = min(cost, c + mc(num - 3));
    return dp[num] = cost;
}

int32_t main() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> a >> b >> c;
    if (n % 4 == 0) {
        cout << 0;
    } else {
        int num = 4 - (n % 4);
        int cost = mc(num);
        for (int i = 1; i <= 4; i++) 
            cost = min(cost, mc(num + i * 4));
        cout << cost;
    }
    cout << endl;
}
