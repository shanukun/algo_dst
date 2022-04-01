#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        sort(v.begin(), v.end());
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int lo = i;
            int hi = n;
            int ans = -1;
            while (lo < hi) {
                int mid = lo + (hi - lo) / 2;
                if (v[mid] > v[i]) {
                    ans = mid;
                    hi = mid;
                } else {
                    lo = mid + 1;
                }
            }
            if (ans != -1)  {
                if (n - ans < ans)
                    cnt++;
            } else {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
