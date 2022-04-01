#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff firmp
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int le = -1;
        unordered_map<int, bool> mp;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            le = max(num, le);
            mp[num] = true;
        }
        int ans = -1;
        for (int i = 0; i <= le; i++) {
            if (mp.find(i) == mp.end()) {
                if (k > 0) {
                    k--;
                } else {
                    ans = i;
                    break;
                }
            }
        }
        if (k == 0 && ans == -1) {
            ans = le + 1;
        } else if (k > 0) {
            ans = le + k + 1;
        }
        cout << ans << endl;
    }
}
