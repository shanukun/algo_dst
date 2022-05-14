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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> ans;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (v[i] >= v[i - 1]) {
                cnt++;
            } else {
                ans.push_back(cnt);
                cnt = 1;
            }
        }
        ans.push_back(cnt);

        int res = 0;
        for (int i = 0; i < sz(ans); i++) {
            res += (ans[i] * (ans[i] + 1)) / 2;
        }
        cout << res << endl;
    }
}
