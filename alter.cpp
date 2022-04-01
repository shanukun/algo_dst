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
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if (p % a == 0 && q % b == 0) {
            p /= a;
            q /= b;
            if (abs(p - q) <= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "No" << endl;
        }
    }
}
