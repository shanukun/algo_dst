#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    bool fl = true;
    for (int i = 0; i < n; i++) {
        while (v[i] % 2 == 0 || v[i] % 3 == 0) {
            if (v[i] % 2 == 0)
                v[i] = v[i] / 2;
            if (v[i] % 3 == 0)
                v[i] = v[i] / 3;
        }
        if (i > 0 && v[i] != v[i - 1]) {
            fl = false;
            break;
        }
    }
    cout << (fl ? "YES" : "NO") << endl;
}
