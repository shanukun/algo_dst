#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define endl '\n'

int bs(int m, int k, vector<int> &ps) {
    int res = 0;
    int lo = 0, hi = m;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int psum = (mid > 0 ? ps[m] - ps[mid - 1] : ps[m]);
        int req = (m - mid + 1) * k - psum;
        if (req <= mid) {
            res = m - mid + 1;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return res;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> v(n);
        vector<int> ps(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++) {
            if (i == 0) 
                ps[i] = v[i];
            else
                ps[i] = ps[i - 1] + v[i];
        }


        while (q--) {
            int k;
            cin >> k;
            int ans = 0;

            int pk = lower_bound(v.begin(), v.end(), k) - v.begin();
            ans += n - pk;
            ans += bs(pk - 1, k, ps);
            cout << ans << endl;
        }
    }
}
