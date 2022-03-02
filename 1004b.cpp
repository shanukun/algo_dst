#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m, l, r;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
    }
    int p = 0;
    for (int i = 0; i < n; i++) {
        cout << p;
        p = 1 - p;
    }
    cout << endl;
}
