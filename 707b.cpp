#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int N = 1e5 + 3;

vector<bool> pre(N, false);

int32_t main() {
    int n, m, k;
    int u, v, l, num;
    cin >> n >> m >> k;

    vector<pair<int, pair<int, int>>> vec;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> l;
        vec.push_back({u, {v, l}});
    }
    for (int i = 0; i < k; i++) {
        cin >> num;
        pre[num] = true;
    }
    int mn = INT_MAX;
    for (int i = 0; i < m; i++) {
        if (pre[vec[i].ff] && pre[vec[i].ss.ff] == false)
            mn = min(mn, vec[i].ss.ss);
        if (pre[vec[i].ss.ff] && pre[vec[i].ff] == false)
            mn = min(mn, vec[i].ss.ss);

    }

    if (mn == INT_MAX) {
        cout << -1;
    } else {
        cout << mn;
    }
    cout << endl;


}
