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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                int c = v[i] ^ v[j];
                if (v[i] < v[j]) {
                    c = c - (c & v[i]);
                    if (v[j] > c)
                        v[j] = c;
                } else {
                    c = c - (c & v[j]);
                    if (v[i] > c)
                        v[i] = c;
                }
            }
        }
        int sm = 0;
        for (int i = 0; i < n; i++) 
            sm += v[i];
        cout << sm << endl;
    }
}
