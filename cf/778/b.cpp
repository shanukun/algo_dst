#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

const int mod = 998244353;
const int N = 1e3 + 7;
int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v(N);
    v[0] = v[1] = 1;
    for (int i = 2; i < N; i++) {
        v[i] = (i * v[i - 1]) % mod;
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 != 0) {
            cout << 0 << endl;
        } else {
            int m = n / 2;
            int ans = v[m] % mod;
            ans *= v[m] % mod;
            ans %= mod;
            cout << ans << endl;
        }
    }
}
