#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++ ) {
        mp[v[i] - i] += v[i];
    }
    int mx = -1;
    for (auto x: mp) {
        mx = max(mx, x.ss);
    }
    cout << mx << endl;
}
