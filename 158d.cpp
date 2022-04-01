#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sm = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sm += v[i];
    }
    for (int i = 1; 2 * i <= n; i++) {
        if (n % i == 0 && n / i > 2) {
            for (int j = 0; j < i; j++) {
                int cs = 0;
                for (int k = j; k < n; k += i) {
                    cs += v[k];
                }
                sm = max(sm, cs);
            }
        }
    }
    cout << sm << endl;
}
