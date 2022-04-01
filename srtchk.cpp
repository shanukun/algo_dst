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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        bool fl = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i])
                fl = false;
        }
        cout << (fl ? "yes" : "no") << endl;
    }
}
