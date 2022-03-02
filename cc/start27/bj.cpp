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
        int a, b;
        cin >> a >> b;
        int c = 21 - (a + b);
        if (c > 10 || c < 1)
            cout << -1 << endl;
        else 
            cout << c << endl;
    }
}
