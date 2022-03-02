#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n, num;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<pair<int, int>> v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> num;
            v[i] = {num, i};
        }
        sort(v.begin() + 1, v.end());
        int mn = INT_MAX;
        for (int i = 1; i <= n - 1; i++) {
            if (v[i].ff != v[i + 1].ff) continue;
            mn = min(v[i + 1].ss - v[i].ss + 1, mn);
        }
        if (mn == INT_MAX)
            cout << -1 << endl;
        else 
            cout << mn << endl;
    }
}
