#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &g, vector<bool> &vis, int v) 
{
    vis[v] = true;
    for (auto x: g[v]) {
        if (!vis[x])
            dfs(g, vis, x);
    }
}

int main()
{
    int n, m, u, v;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    vector<bool> vis(n + 1, false);
    while (m--) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(g, vis, i);
            cnt++;
        }
    }
    cout << cnt << endl;
}
