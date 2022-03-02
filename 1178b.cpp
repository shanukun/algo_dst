#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int N = 1e6 + 3;

int dp[N];
int32_t main() {
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == 'v' && s[i] == 'v')
            cnt++;
        if (s[i] == 'o')
            dp[i] = cnt;
    }
    cnt = 0;
    int ans = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (s[i + 1] == 'v' && s[i] == 'v')
            cnt++;
        if (s[i] == 'o')
            ans += dp[i] * cnt;
    }
    cout << ans << endl;
}
