#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> gr[n + 1];
    vector<int> par(n + 1, 0);
    vector<bool> vis(n + 1, false);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }

    int p = 1;
    queue<int> q;
    q.push(1);
    vis[1] = true;
    par[1] = p;
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        p = 1 - par[i];
        for (int x : gr[i]) {
            if (!vis[x]) {
                q.push(x);
                par[x] = p;
                vis[x] = true;
            }
        }
    }
    int cnt = 0;
    for (int x: par)
        if (x == 1)
            cnt += 1;
    int ans = cnt * (n - cnt) - (n - 1);
    cout << ans << endl;
}
