#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n = 10;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        cin >> k;
        for (int i = n - 1; i >= 0 && k > 0; i--) {
            if (v[i] <= k) {
                k -= v[i];
                v[i] = 0;
            } else {
                v[i] -= k;
                k = 0;
            }
        }
        int ans = 9;
        for (int i = n - 1; i >= 0; i--) {
            ans = i;
            if (v[i] != 0)
                break;
        }
        cout << ans + 1 << endl;
    }
 
}
