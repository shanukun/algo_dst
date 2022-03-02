#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = n / 10 + (n % 10 == 0 ? 0 : 1);
        cout << ans << endl;
    }
}
