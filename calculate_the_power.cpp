#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD = 1e9 + 7;

int bin_expo(ll a, ll b) 
{
    int res = 1;
    while (b > 0) {
        if (b & 1) 
            res = (res % MOD * 1LL * a) % MOD;
        a = (a % MOD * 1LL * a % MOD) % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll a;
    ll b;
    cin >> a >> b;
    cout << bin_expo(a, b) << endl;
}
