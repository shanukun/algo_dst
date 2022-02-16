#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl;
int main() {
    long long t, n, m, k;
    cin >> t;

    while (t--) {
        cin >> n >> m >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        bool fl = true;
        for (int i = 1; i < n; i++) {
            long long val = abs(v[i - 1] - v[i]);
            if (v[i - 1] >= v[i]) {
                m += val;
                if (k <= v[i])
                    m += k;
                else 
                    m += v[i];
            } else if (v[i - 1] < v[i]) {
                if (val > k) {
                    if (m >= val - k) {
                        m -= val - k;
                    } else {
                        fl = false;
                        break;
                    }
                } else {
                    if (k <= v[i])
                        m += k - val;
                    else
                        m += v[i - 1];
                }
            }
        }
        cout << (fl ? "YES" : "NO") << endl;
    }
}
