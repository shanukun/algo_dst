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
    int j = -1;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) continue;
        if (j == -1) {
            j = i;
        } else {
            ans *= (i - j);
            j = i;
        }
    }
    if (j == -1) 
        cout << 0 << endl;
    else
        cout << ans << endl;
}
