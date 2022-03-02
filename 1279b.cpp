#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n, s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        int sm = 0;
        int mxi = 0;

        bool fl = false;
        for (int i = 0; i < n; i++) {
            if (v[mxi] < v[i]) {
                mxi = i;
            }

            if (sm + v[i] <= s) {
                sm += v[i];
            } else if (sm - v[mxi] + v[i] <= s) {
                fl = true;
                break;
            }
        }
        cout << (fl ? mxi + 1 : 0) << endl;
    }
}
