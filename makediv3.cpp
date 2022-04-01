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
        if (n == 1) {
            cout << 3 << endl;
        } else {
            cout << 1;
            for (int i = 1; i < n - 1; i++)
                cout << 0;
            cout << 5 << endl;
        }
    }
}
