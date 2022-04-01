#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int inf = 1e18;

int n, w, l;

bool chk(vector<pair<int, int>> &v, int m) {
    int tot = 0;
    for (int i = 0; i < n; i++) {
        int mon = (l - v[i].ff + v[i].ss - 1) / v[i].ss;
        if (m >= mon) {
            tot += v[i].ff;
            if (tot >= w) return true;
            tot += v[i].ss * m;
            if (tot >= w) return true;
        }
    }
    return false;
}

int32_t main() {
    cin >> n >> w >> l;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].ff >> v[i].ss;

    int lo = 0; 
    int hi = inf + 10;
    int ans;
    while (hi - lo > 1) {
        int mid = lo + (hi - lo) / 2;
        if (chk(v, mid)) {
            ans = mid;
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }

    if (chk(v, lo))
        ans = lo;
    else
        ans = hi;

    cout << ans << endl;
}
