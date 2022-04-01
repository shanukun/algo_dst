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
        int n, num;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> num;
            m[num]++;
        }
        int ans = 0;
        for (auto x: m) {
            if (x.ss > 1)
                ans += x.ss - 1;
        }
        cout << ans << endl;
    }
}
