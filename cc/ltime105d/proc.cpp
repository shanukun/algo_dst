#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sm = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sm += v[i];
        }
        int csm = 0;
        int mn = sm;
        for (int i = 0; i <= n; i++) {
            mn = min(mn, max(csm, sm - csm));
            if (i >= n)
                break;
            csm += v[i];
        }
        cout << mn << endl;
    }
}
