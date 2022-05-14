#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

const int inf = 1e14;

int m, n, k;

bool chk(vector<pair<int, int>> &v, int val) {
    int sm = 0;
    vector<int> nv(m);
    for (int i = 0; i < m; i++) {
        if (val >= v[i].ff)
            nv.push_back(1 + (val - v[i].ff) / v[i].ss);
        else
            nv.push_back(0);
    }
    sort(all(nv));
    reverse(all(nv));
    int li = min(m, n);
    for (int i = 0; i < li; i++) 
        sm += nv[i];

    return sm >= k;
}

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cin >> m >> n >> k;
        vector<pair<int, int>> T(m);
        for (int i = 0; i < m; i++) 
            cin >> T[i].ff;
        for (int i = 0; i < m; i++) 
            cin >> T[i].ss;

        int lo = 0;
        int hi = inf;
        int ans;
        while (hi - lo > 1) {
            int mid = lo + (hi - lo) / 2;
            if (chk(T, mid)) {
                ans = mid;
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        if (chk(T, lo)) {
            ans = lo;
        } else {
            ans = hi;
        }

        cout << ans << endl;
    }
}
