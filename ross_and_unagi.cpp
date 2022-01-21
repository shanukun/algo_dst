#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD = 1e6 + 3;
vector<bool> prim(MOD, true);
vector<int> min_prim(MOD, 0);

int bin_expo(ll a, ll b, ll M) 
{
    ll res = 1;
    while (b > 0) {
        if (b & 1) 
            res = (res % M * 1LL * a) % M;
        a = (a % M * 1LL * a % M) % M;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll q, a, b, c;
    cin >> q;

    prim[0] = prim[1] = false;
    for (int i = 2; i <= MOD; ++i) {
        if (prim[i]) {
            min_prim[i] = i;
            for (int j = 2 * i; j <= MOD; j += i) {
                prim[j] = false; 
                if (min_prim[j] == 0)
                    min_prim[j] = i;
            }
        }
    }
    while (q--) {
        cin >> a >> b >> c;
        ll num = (bin_expo(a, bin_expo(b, c, MOD - 1), MOD) + 1) % MOD;

        int sum = 0;
        while (num > 1) {
            int pf = min_prim[num];
            while (num % pf == 0) {
                num /= pf;
                sum += pf;
            }
        }
        cout << sum << endl;
    }
}
