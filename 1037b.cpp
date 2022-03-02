#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int ans = 0;
    if (v[n / 2] < s)
        for (int i = n / 2; i < n; i++) {
            if (v[i] < s)
                ans += s - v[i];
            else 
                break;
        }
    else if (v[n / 2] > s)
        for (int i = n / 2; i >= 0; i--) {
            if (v[i] > s)
                ans += v[i] - s;
            else 
                break;
        }
    cout << ans << endl;
}
