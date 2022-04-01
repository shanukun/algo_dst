#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> op[m + 1];
    for (int i = 1; i <= m; i++) {
        int l, r, d;
        cin >> l >> r >> d;
        op[i].push_back(l);
        op[i].push_back(r);
        op[i].push_back(d);
    }

    int opcnt[m + 1] = {0};
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        opcnt[x] += 1;
        if (y + 1 <= m)
            opcnt[y + 1] -= 1;
    }

    for (int i = 1; i <= m; i++)
        opcnt[i] += opcnt[i - 1];

    int tta[n + 1] = {0};
    for (int i = 1; i <= m; i++) {
        int x = op[i][0];
        int y = op[i][1];
        int d = op[i][2];
        tta[x] += opcnt[i] * d;
        if (y + 1 <= n)
            tta[y + 1] -= opcnt[i] * d;
    }
    for (int i = 1; i <= n; i++) {
        tta[i] += tta[i - 1];
        v[i] += tta[i];
        cout << v[i] << " ";
    }
    cout << endl;
}
