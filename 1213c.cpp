#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int q, n, m;
    cin >> q;

    while (q--) {
        cin >> n >> m;
        int k = n / m;
        int c = 0;
        for (int i = 1; i <= 10; i++) {
            c += (i * m) % 10; 
        }
        int sm = (k / 10) * c;
        k = k % 10;
        c = 0;
        for (int i = 1; i <= k; i++) {
            c += (i * m) % 10;
        }
        sm += c;
        cout << sm << endl;
    }
}
