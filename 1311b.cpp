#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int hm[101] = {0};
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        for (int i = 0; i < m; i++) {
            int num;
            cin >> num;
            hm[num - 1] = 1;
        }
        vector<int> vc = v;
        sort(vc.begin(), vc.end());
        
        bool fl = true;
        for (int i = 0; i < n;) {
            if (hm[i] == 0) {
                i++;
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (hm[j]) continue;
                sort(v.begin() + i, v.begin() + j + 1);
                i = j + 1;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (vc[i] != v[i]) {
                cout << "NO\n";
                fl = false;
                break;
            }
        }
        if (fl) cout << "YES\n";
    }
}
