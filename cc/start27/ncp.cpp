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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 1; i < n; i += 2) {
            if (__gcd(v[i - 1], v[(i + 1) % n]) != 1) {
                v[i] = __gcd(v[i - 1], v[(i + 1) % n]);
            } else {
                v[i] = v[i - 1] * v[(i + 1) % n]; 
            }
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}
