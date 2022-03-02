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
        bool fl = true;
        vector<pair<int, pair<int, int>>> ans;
        if (v[n - 1] < v[n - 2]) {
            fl = false;
        } else {
            int dif = v[n - 2] - v[n - 1];
            int a = n - 1, b = n;
            for (int i = n - 3; i >= 0; i--) {
                if (v[i] > v[i + 1]) {
                    if (dif <= v[i + 1]) {
                        v[i] = dif;
                        ans.push_back({i + 1, {a, b}});
                    } else {
                        fl = false;
                        break;
                    }
                }
                if (dif > v[i] - v[n - 1]) {
                    dif = v[i] - v[n - 1];
                    a = i + 1;
                    b = n;
                }
            }
        }
        if (fl) {
            cout << ans.size() << endl;
            for (auto x: ans) {
                cout << x.ff << " ";
                cout << x.ss.ff << " ";
                cout << x.ss.ss << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
}
