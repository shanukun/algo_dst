#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int main() {
    int t, n, x, y;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        pair<int, int> cur = make_pair(0, 0);
        bool fl = true;
        string movs;
        for (int i = 0; i < n; i++) {
            if (v[i].ff >= cur.ff && v[i].ss >= cur.ss) {
                int rc = v[i].ff - cur.ff;
                int uc = v[i].ss - cur.ss;
                movs += string(rc, 'R');
                movs += string(uc, 'U');
                cur = v[i];
            } else {
                fl = false;
                cout << "NO\n";
                break;
            }
        }
        if (fl) {
            cout << "YES\n";
            cout << movs << endl;
        }
    }

}
