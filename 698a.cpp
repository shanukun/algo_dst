#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    int p = -1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            p = -1;
            cnt++;
            continue;
        }
        if (p == -1) {
            if (v[i] == 2)
                p = 1;
            else if (v[i] == 1)
                p = 0;
        } else if (p == 1) {
            if (v[i] == 2) {
                p = -1;
                cnt++;
            } else {
                p = 0;
            }
        } else {
            if (v[i] == 1) {
                p = -1;
                cnt++;
            } else {
                p = 1;
            }
        }
    }
    cout << cnt << endl;
}
