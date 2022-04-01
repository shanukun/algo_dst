#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    int ans = 0;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        if (cur + v[i] > h) {
            int r = cur - (h - v[i]);
            int n = r / k + (r % k == 0 ? 0 : 1);
            cur = max(0LL, cur - (n * k)) + v[i];
            ans += n;
        } else {
            cur += v[i];
        }
    }
    if (cur > 0) {
        ans += cur / k + (cur % k == 0 ? 0 : 1); 
    }
    cout << ans << endl;
}
