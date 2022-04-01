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
        int n;
        cin >> n;
        int a, b;
        int x = 0, y = 0;
        for (int i = 1; i <= 4 * n - 1; i++) {
            cin >> a >> b;
            x ^= a;
            y ^= b;
        }
        cout << x << " " << y << endl;
    }
}
