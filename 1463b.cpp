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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].ff;
            v[i].ss = i;
        }
        sort(all(v));
        vector<int> ans(n);
        ans[v[0].ss] = v[0].ff;
        for (int i = 1; i < n; i++) {
            int div = v[i].ff / ans[v[i - 1].ss];
            ans[v[i].ss] = div * ans[v[i - 1].ss];
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
