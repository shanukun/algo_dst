#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ts = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ts += v[i];
        }

        int l[n] = {0}, r[n] = {0};
        l[0] = 1; 
        for (int i = 1; i < n; i++)
            l[i] = min(l[i - 1] + 1, v[i]);
        r[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
            r[i] = min(r[i + 1] + 1, v[i]);

        int m = -1;
        for (int i = 0; i < n; i++)
            m = max(m, min(l[i], r[i]));
        cout << ts - m * m << endl;


    }
}
