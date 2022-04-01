#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int q, n;
    cin >> q;
    while (q--) {
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int os = 0, gs = 0, bs = 0;
        for (string x : v) {
            int ss = x.size();
            debug(ss);
            if (ss % 2 != 0) {
                os++;
                gs++;
                continue;
            }
            int nz = 0, no = 0;
            for (char c : x) {
                if (c == '1')
                    no++;
                else 
                    nz++;
            }
            if (no % 2 != 0 || nz % 2 != 0)
                bs++;
            else 
                gs++;
        }
        debug(gs);
        debug(bs);
        if (os > 0) {
            cout << n << endl;
        } else {
            if (bs % 2 == 0) {
                cout << n << endl;
            } else {
                cout << n - 1 << endl;
            }
        }
    }
}
