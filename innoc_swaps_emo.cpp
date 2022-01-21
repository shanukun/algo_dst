#include <bits/stdc++.h>

using namespace std;
const long long int mod = 1e9 + 7;
const long long int N = 1e6 + 3;

vector<int> fact(N);

int bin_expo(int a, int b, int m) 
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res % m * 1LL * a % m) % m;
        a = (a * 1LL *a) % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    fact[0] = 1;
    for (int i = 1; i < N; ++i) 
        fact[i] = (i * 1LL * fact[i - 1]) % mod;

    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        int ans = fact[n];
        int den = (fact[n - k] * 1LL * fact[k]) % mod;
        int inv = bin_expo(den, mod - 2, mod);
        ans = (ans % mod * 1LL * inv) % mod;
        cout << (ans * 1LL * bin_expo(2, k, mod)) % mod << endl;
    }

}
