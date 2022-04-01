#include <bits/stdc++.h>
using namespace std;
/* #define int long long */
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.ss <= b.ss)
        return true;
    return false;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        unordered_map<int, int> mp;
        vector<pair<int, int>> v;
        pair<int, int> p;
        int x, w;
        for (int i = 1; i <= m; i++) {
            cin >> x >> w;
            v.push_back({w, x});
            mp[x] = i;
        }
        sort(v.begin(), v.end());
        int wt = 0;
        for (int i = 0; i < 2 * n; i++)
            wt += v[i].ff;
        sort(v.begin(), v.begin() + 2 * n, cmp);
        cout << wt << endl;
        for (int i = 0; i < n; i++) {
            cout << mp[v[i].ss] << " " << mp[v[2 * n - 1 - i].ss] << endl;
        }
        cout << endl;
    }
}
