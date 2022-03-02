#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, num;
    cin >> n;

    int mn = INT_MAX;
    int mx = -1;
    int mnc = 0;
    int mxc = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (mx < num) {
            mx = num;
            mxc = 1;
        } else if (mx == num) {
            mxc++;
        }
        if (mn > num) {
            mn = num;
            mnc = 1;
        } else if (mn == num) {
            mnc++;
        }
    }
    if (mx == mn) {
        mxc = n * (n - 1) / 2;
        mnc = 1;
    }
    cout << mx - mn << " " << mxc * mnc << endl;
}
