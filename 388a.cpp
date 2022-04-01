#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<bool> m(n, false);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        if (m[i]) continue;
        m[i] = true;
        ans++;
        for (int j = i + 1; j < n; j++) {
            if (m[j]) continue;
            if (cnt <= v[j]) {
                m[j] = true;
                cnt++;
            }
        }
    }
    cout << ans << endl;
}
