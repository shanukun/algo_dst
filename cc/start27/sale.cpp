#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, a, b, c;
    cin >> t;
    int cost = 0;
    int mn;
    while (t--) {
        cin >> a >> b >> c;
        cost = a + b + c;
        mn = min(a, b);
        mn = min(mn, c);
        cout << cost - mn << endl;
    }
}
