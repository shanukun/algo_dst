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
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        int ans = abs(v * v - u * u);
        int td = 2 * s;
        if (ans % td == 0) {
            ans /= td;
        } else { 
            ans /= td;
            ans++;
        }
        if (u <= v || ans <= a) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
