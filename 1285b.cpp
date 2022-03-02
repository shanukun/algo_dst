#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mx += v[i];
        }
        int cs = 0;
        int amx = INT_MIN;
        for (int i = 1; i < n; i++) {
            cs += v[i];
            if (cs > amx) {
                amx = cs;
            }
            if (cs < 0) {
                cs = 0;
            }
        }
        cs = 0;
        for (int i = 0; i < n - 1; i++) {
            cs += v[i];
            if (cs > amx) {
                amx = cs;
            }
            if (cs < 0) {
                cs = 0;
            }
        }
        if (mx > amx) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
