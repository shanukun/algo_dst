#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

const int N = 2e5 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        map<int, vector<int>> mp;
        int ans[n];
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]].push_back(i);
            ans[i] = 0;
        }

        int cnt = 0;
        for (auto &x : mp) {
            for (int i = 0; i < min(sz(x.ss), k); i++) {
                ans[(x.ss)[i]] = cnt + 1;
                cnt++;
            }
        }

        int ma = cnt / k;
        ma *= k;
        for (int i = 0; i < n; i++) {
            if (ans[i] > ma) 
                ans[i] = 0;
            if (ans[i] != 0) {
                int res = (ans[i] % k == 0 ? k : ans[i] % k);
                cout << res << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;

    }
}
