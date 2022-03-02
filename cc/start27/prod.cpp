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
        int a, b, c;
        cin >> b >> c;
        a = __gcd(b, c);
        cout << c / a << endl;
    }
}
