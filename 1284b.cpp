#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    int n, l;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> l;
        vector<int> vec(l);
        for (int j = 0; j < l; j++)
            cin >> vec[j];
        reverse(all(vec));
        if (is_sorted(all(vec)))
            v.push_back({vec[0], vec[l - 1]});
    }
    sort(all(v));
    int ans = n * n;
    for (int i = 0; i < sz(v); i++) {
        ans -= v.end() - lower_bound(all(v), pair<int, int>(v[i].ss, -1));
    }
    cout << ans << endl;
}
