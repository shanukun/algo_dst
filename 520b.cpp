#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int N = 1e5 + 7;
int ans = INT_MAX;

vector<int> vis(N, -1);
void dfs(int n, int m, int cnt) {
    if (n == m) {
        ans = min(ans, cnt);
        return;
    } 
    cnt++;
    if (vis[n] != -1) {
        if (cnt >= vis[n])
            return;
    }
    vis[n] = cnt;
    if (n - 1 > 0)
        dfs(n - 1, m, cnt);
    if (n < m)
        dfs(2 * n, m, cnt);
}

int32_t main() {
    int n, m;
    cin >> n >> m;
    dfs(n, m, 0);
    cout << ans << endl;

}
