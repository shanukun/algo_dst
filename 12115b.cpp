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
    v[0] = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        v[i] = v[i - 1];
        if (num < 0)
            v[i] += 1;
    }
    int on = 1;
    int en = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] & 1) {
            ans += on;
            en++;
        } else {
            ans += en;
            on++;
        }
    }
    int tot = n * (n + 1);
    tot /= 2;

    cout << ans << " " << tot - ans << endl;

}
