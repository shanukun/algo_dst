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
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n, k, num;
    cin >> n >> k;
    int ans = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> num;
        ans += num / 10;
        int rem = 10 - num % 10;
        v.push_back({rem, num});
    }
    sort(all(v));
    for (int i = 0; i < n && k > 0; i++) {
        if (v[i].ff <= k) {
            k -= v[i].ff;
            ans++;
        } else {
            break;
        }
    }
    ans = min(ans + k / 10, n * 10);
    cout << ans << endl;
}
