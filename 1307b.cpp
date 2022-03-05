#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int mn = INT_MAX;
        int cmn = 0;
        for (int i = 0; i < n; i++) {
            if (x < v[i]) {
                cmn = 2;
            } else {
                cmn = x / v[i];
                if (x % v[i] != 0)
                    cmn += 1;
            }
            mn = min(mn, cmn);
        }
        cout << mn << endl;
    }
}
