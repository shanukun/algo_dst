#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 101;

vector<vector<pair<int, int>>> gr(N);

bool dfs(int sv, int ev, int c, vector<bool> &vis) {
    int ans = false;
    if (vis[sv]) return ans; 
    vis[sv] = true;
    for (auto ch : gr[sv]) {

        if (ch.ff == ev && ch.ss == c) {
            return true;
        }

        if (ch.ss == c)
            ans |= dfs(ch.ff, ev, c, vis);
    }
    return ans;
}

int32_t main() {
    int n, m;
    cin >> n >> m;

    unordered_set<int> st;
    int a, b, c;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        gr[a].push_back({b, c});
        gr[b].push_back({a, c});
        st.insert(c);
    }

    int q, u, v;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> u >> v;

        int cnt = 0;

        for (int x: st) {
            vector<bool> vis(n + 1, false);
            if (dfs(u, v, x, vis))
                cnt++;
        }
        cout << cnt << endl;
    }
}
