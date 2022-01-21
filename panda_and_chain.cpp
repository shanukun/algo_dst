#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e6 + 3;

vector<int> f(mod, 0);
int main() 
{
    int t;
    ll n, x;

    f[0] = 1;
    for (int i = 1; i < mod; ++i)
        f[i] = (1LL * f[i - 1] * i) % mod;

    cin >> t;
    while (t--) {
        cin >> n >> x;
        if (n >= mod)
            cout << 0 << endl;
        else
            cout << (1LL * f[n] * x) % mod << endl;
    }
}
