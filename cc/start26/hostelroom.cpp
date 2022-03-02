#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int main() {
    int t, n, x, num;
    cin >> t;

    while (t--) {
        cin >> n >> x;
        int mx = x;
        for (int i = 0; i < n; i++) {
            cin >> num;
            x = max(0, x + num);
            mx = max(mx, x);
        }
        cout << mx << endl;
    }

}
