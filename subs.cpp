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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int md = INT_MAX;
        for (int i = 0; i + k - 1 < n; i++) {
            md = min(md, v[i + k - 1] - v[i]);
        }
        cout << md << endl;
    }
}
