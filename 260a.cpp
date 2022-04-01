#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool fl = false;
    a *= 10;
    for (int i = 0; i <= 9; i++) {
        if ((a + i) % b == 0) {
            a += i;
            fl = true;
            break;
        }
    }
    if (fl) {
        cout << a;
        for (int i = 0; i < c - 1; i++)
            cout << 0;
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}
