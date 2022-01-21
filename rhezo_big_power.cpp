#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD = 1e9 + 7;

int conv_2_int(string &b) 
{
    ll M = MOD - 1;
    int len = b.size();
    int ten = 1;
    ll res = 0;

    for (int i = len - 1; i >= 0; --i) {
        res += ((b[i] - '0') * 1LL * ten) % M;
        ten = (ten * 1LL * 10) % M;
    }
    return res % M;
}

int bin_expo(int a, int b) 
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
    cin >> a;
    string b;
    cin >> b;
    cout << bin_expo(a, conv_2_int(b)) << endl;
}
