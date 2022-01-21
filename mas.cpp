#include <bits/stdc++.h>

using namespace std;
#define ll long long int
const ll mod = 2760727302517;

ll bin_mul(ll a, ll b) {
    ll ans = 0;
    while (b > 1) {
        if (b & 1)
            ans = (ans + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int t, x, n, q;
    ll v;
    cin >> t;

    while (t--) {
        cin >> n >> q;
        vector<ll> A(n);
        for (int i = 0; i < n; i++)
            cin >> A[i];

        ll prod = 0, sum = 0;
        for (int i = 0; i < int(A.size()); ++i) {
            prod += (A[i] * A[i]);
            sum += A[i];
        }

        while (q--) {
            int op;
            cin >> op;
            if (op == 1) {
                cin >> x >> v;
                ll value = A[x - 1];
                prod -= (value * value);
                prod += (v * v);
                sum -= value;
                sum += v;
                A[x - 1] = v;
            } else if (op == 2) {
                cin >> x >> v;
                ll value = A[x - 1] + v;
                prod -= (value * value);
                prod += (v * v);
                sum -= value;
                sum += v;
                A[x - 1] += v;
            } else if (op == 3) {
                ll res = ((A.size() * prod) % mod - bin_mul(sum, sum) % mod) % mod;
                cout << res << endl;
            }
        }
    }
}
