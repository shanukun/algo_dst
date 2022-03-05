#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] < i)
                break;
            k = i;
        }
        bool fl = true;
        for (int i = n - 1; i >= k; i--) {
            if (v[i] < n - 1 - i)
                fl = false;
        }
        cout << (fl ? "Yes" : "No") << endl;
    }
}
