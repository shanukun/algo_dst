#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n , k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        string s(n, 'a');
        for (int i = n - 2; i >= 0; i--) {
            if (k <= (n - 1 - i)) {
                s[i] = 'b';
                s[n - k] = 'b';
                break;
            }
            k -= (n - 1 - i);
        }
        cout << s << endl;
    }
}
