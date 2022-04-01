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
        int l, r, a;
        cin >> l >> r >> a;
        if (r < a) {
            cout << r << endl;
        } else if (r - l == 0) {
            cout << r / a + r % a << endl;
        } else {
            int nd = r / a;
            nd *= a;
            if (nd <= l) {
                cout << r / a + r % a << endl;
            } else {
                nd--;
                int f1 = nd / a + (nd % a);
                int f2 = r / a + (r % a);
                if (f1 > f2)
                    cout << f1 << endl;
                else 
                    cout << f2 << endl;
            }
        }
    }
}
