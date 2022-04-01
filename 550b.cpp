#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int lm = 1 << n;
    vector<vector<int>> ss;
    for (int i = 1; i < lm; i++) {
        vector<int> s;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0)
                s.push_back(v[j]);
        }
        ss.push_back(s);
    }

    int cnt = 0;
    for (int i = 0; i < (int) ss.size(); i++) {
        int sz = 0;
        for (int j = 0; j < (int) ss[i].size(); j++)
            sz += ss[i][j];
        if (sz == 0) continue;
        if (sz >= l && sz <= r) {
            sort(ss[i].begin(), ss[i].end());
            if (ss[i][ss[i].size() - 1] - ss[i][0] >= x)
                cnt++;
        }
    }
    cout << cnt << endl;
}
