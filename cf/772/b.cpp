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
        vector<bool> m(n, false);
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 1; i < n - 1; i++) {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                m[i] = true;
        }
        int cnt = 0;
        for (int i = 1; i < n - 1; i++) {
            if (m[i] == false) continue;
            if (i + 2 < n && m[i + 2]) {
                m[i + 2] = false;
                v[i + 1] = max(v[i], v[i + 2]);
            } else {
                v[i] = max(v[i - 1], v[i + 1]);
            }
            cnt++;
        }
        cout << cnt << endl;
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
}
