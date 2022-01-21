#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;
const long long N = 2e6 + 7;

vector<bool> prim(N, true);
vector<int> mpr(N, 0);
vector<int> fact(N, 0);

int bex(int a, int b)
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * 1LL * a) % mod;
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;

    prim[0] = prim[1] = false;
    for (int i = 2; i < N; ++i)
        if (prim[i]) {
            mpr[i] = i;
            for (int j = 2 * i; j < N; j += i) {
                mpr[j] = i;
                prim[j] = false;
            }
        }

    fact[0] = 1;
    for (int i = 1; i <= N; ++i) 
        fact[i] = (fact[i - 1] * 1LL * i) % mod;

    int num;
    unordered_map<int, int> m;
    for (int i = 0; i < n; ++i)  {
        cin >> num;
        while (num > 1) {
            int pf = mpr[num];
            while (num % pf == 0) {
                num /= pf;
                m[pf]++;
            }
        }
    }
    int ans = 1;
    int cnk = 1;
    for (auto x: m) {
        int nc = k + x.second - 1;
        int rc = k - 1;
        cnk = (1LL * fact[nc] * bex(fact[rc], mod - 2)) % mod;
        cnk = (1LL * bex(fact[nc - rc], mod - 2) * cnk) % mod;
        ans = (1LL * ans * cnk) % mod;
    }
    cout << ans << endl;
}
