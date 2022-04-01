#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, x, y;
    cin >> t;
    unordered_map<int, int> xmap;
    unordered_map<int, int> ymap;
    unordered_map<string, int> cnt;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        cnt[to_string(x) + to_string(y)]++;
        xmap[x]++;
        ymap[y]++;
    }
    int ans = 0;
    for (auto x: xmap) {
        ans += (x.ss * (x.ss - 1)) / 2;
    }
    for (auto x: ymap) {
        ans += (x.ss * (x.ss - 1)) / 2;
    }
    for (auto x: cnt) {
        if (x.ss > 1) {
            ans -= (x.ss * (x.ss - 1)) / 2;
        }
    }
    cout << ans << endl;
}
