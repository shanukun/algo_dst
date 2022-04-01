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
        int n, k;
        cin >> n >> k;
        if (k % n == 0) {
            cout << 1 << endl;
        } else if (n % k == 0) {
            cout << n / k << endl;
        } else {
            if (__gcd(n, k) == 1)
                cout << n << endl;
            else 
                cout << n / __gcd(n, k) << endl;
        }
    }
}
