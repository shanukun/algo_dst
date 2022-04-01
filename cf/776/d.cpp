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
        vector<int> v(n + 1);
        vector<int> ans(n);
        for (int i = 1; i <= n; i++) 
            cin >> v[i];
        for (int i = n; i >= 1; i--) {
            if (v[i] == i)  {
                ans[i - 1] = 0;
            } else {
                int cnt = 1;
                for (int j = 1; j <= n; j++) {
                    if (v[j] == i) {
                        ans[i - 1] = cnt;
                        break;
                    }
                    cnt++;
                }
                reverse(v.begin() + 1, v.begin() + i + 1);
                cnt = i - cnt + 1;
                reverse(v.begin() + 1, v.begin() + cnt);
                reverse(v.begin() + cnt, v.begin() + i + 1);
            }
        }
        for (int x: ans)
            cout << x << " ";
        cout << endl;
    }
}
