#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int lim = k;
    int i = 0;
    int ans = 0, cnt = 0;
    while (i < m) {
        if (v[i] <= lim) {
            cnt++;
            i++;
        } else if (cnt > 0) {
            ans++;
            lim += cnt;
            cnt = 0;
        } else {
            int inc = v[i] - lim;
            if (inc % k == 0) {
                inc /= k;
            } else {
                inc /= k;
                inc++;
            }
            lim += k * inc;
        }
    }
    if (cnt > 0) ans++;
    cout << ans << endl;
}
