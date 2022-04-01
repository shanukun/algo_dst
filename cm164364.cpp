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
        int x, n, y;
        cin >> x >> n;
        y = x - n;
        unordered_set<int> s;
        for (int i = 0; i < x; i++) {
            int num;
            cin >> num;
            s.insert(num);
        }
        int nf = s.size();
        int ans;
        if (nf >= y) {
            ans = y;
        } else {
            ans = nf;
        }
        cout << ans << endl;
    }
}
