#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, int>> v;
        vector<int> q;

        for (int i = 1;  i <= n; i++) {
            int num;
            cin >> num;
            if (num >= m) {
                q.push_back(i);
            } else {
                v.push_back({num, i});
            }
        }
        int sz = q.size();
        if (sz < x) {
            sort(v.begin(), v.end());
            int vsz = v.size();
            for (int i = 0; i < x - sz; i++)
                q.push_back(v[vsz - 1 - i].ss);
        }
        sz = q.size();
        cout << sz << " ";
        sort(q.begin(), q.end());
        for (int i = 0; i < sz; i++)
            cout << q[i] << " ";
        cout << endl;
    }
}
