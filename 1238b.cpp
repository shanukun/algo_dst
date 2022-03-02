#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
int32_t main() {
    int q, n, r;
    cin >> q;

    while (q--) {
        cin >> n >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        v.push_back(-1);
        int mr = 0;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == v[i + 1]) continue;
            if (v[i] - mr > 0) {
                cnt++;
                mr += r;
            }
        }
        cout << cnt << endl;
    }


}
