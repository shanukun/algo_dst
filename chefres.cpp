#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ff first
#define ss second

int32_t main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<pair<int, int>> intv;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            intv.push_back({a, b});
        }
        sort(all(intv));

        for (int i = 0; i < m; i++) {
            int p;
            cin >> p;

            int pos = -1;
            int lo = 0, hi = n;
            while (lo < hi) {
                int mid = lo + (hi - lo) / 2;
                if (intv[mid].ff < p) {
                    pos = mid;
                    lo = mid + 1;
                } else {
                    hi = mid;
                }

            }
            int ans = 0;
            if (pos == -1) {
                ans = intv[0].ff - p;
            } else if (intv[pos].ss < p) {
                if (pos + 1 < n)
                    ans = intv[pos + 1].ff - p;
                else
                    ans = -1;
            } else if (intv[pos].ss == p) {
                if (pos + 1 < n) {
                    ans = intv[pos + 1].ff - intv[pos].ss;
                } else {
                    ans = -1;
                }
            }
            cout << ans << endl;
        }
    }
}
