#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m;
    cin >> n >> m;

    int cur = 1;
    int rem = m;
    if (n == 1) {
        cout << cur << " " << cur << endl;
    } else if (m == 0) {
        cout << n << " " << n << endl;
    } else {
        while (rem > 0) {
            int add = min(rem, cur);
            cur += 1;
            rem -= add;
        }
        cout << max(1LL * 0, n - 2 * m) << " " << n - cur << endl;
    }
}
