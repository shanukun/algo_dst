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
        unordered_set<int> st;
        vector<int> a(n);
        vector<int> b(n - 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            st.insert(a[i]);
        }
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = b[0] - a[1];
        for (int x : b) {
            if (st.find(x - ans) == st.end()) {
                ans = b[0] - a[0];
                break;
            }
        }
        if (ans <= 0) 
            ans = b[0] - a[0];
        cout << ans << endl;
    }
}
