#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n;
        // 0 - avail
        // 1 - marri
        int kl[n + 1] = {0};
        int pl[n + 1] = {0};
        int umd = -1;
        for (int i = 1; i <= n; i++) {
            cin >> k;
            for (int j = 1; j <= k; j++) {
                int pc;
                cin >> pc;
                if (kl[pc] == 0 && pl[i] == 0) {
                    kl[pc] = 1;
                    pl[i] = 1;
                }
            }
            if (pl[i] != 1)
                umd = i;
        }
        if (umd == -1) {
            cout << "OPTIMAL\n";
        } else {
            cout << "IMPROVE\n";
            for (int i = 1; i <= n; i++) {
                if (kl[i] == 0) {
                    cout << umd << " " << i << endl;
                    break;
                }
            }
        }
    }
}
