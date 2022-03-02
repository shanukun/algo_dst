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
        vector<int> ps(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ps[v[i]] = i;
        }
        int pmax = ps[1], pmin = ps[1];
        cout << 1;
        for (int i = 2; i <= n; i++) {
            pmax = max(pmax, ps[i]);
            pmin = min(pmin, ps[i]);
            if (pmax - pmin + 1 == i) 
                cout << 1;
            else 
                cout << 0;
        }
        cout << endl;
    }

}
