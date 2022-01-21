#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<unordered_set<int> sets_vec(N);

int dfs(vector<pair<int, int>> &g, vector<int> &val, int v, int pare) 
{
    int cnt = 0;
    sets_vec[v].insert(pare);
    sets_vec[pare].insert(v);
    for (auto x: g[v]) {
        if (sets_vec[v].find(x.first) != s.end()) {
            cnt = max(cnt, dfs(g, val, x.first, v));
        }
    }
    return cnt + 
}

int main() 
{
    int t, n, u, v, d;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> val(n + 1, 0);
        vector<pair<int, int>> g[n + 1];
        for (int i = 0; i < n - 1; i++) {
            cin >> u >> v >> d;
            g[u].push_back({v, d});
            g[v].push_back({u, d});
        }
        dfs(g, val, 1, pare);
        for (int i = 1; i <= n; i++)
            cout << val[i] << " ";
        cout << "\n";

        sets_vec.clear();
    }
}
