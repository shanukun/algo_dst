#include <bits/stdc++.h>
using namespace std;
#define ll  long long
const ll mod = 1e9 + 7;

int bex(int a, int b, int m)
{
    int res = 1;
    while (b) {
        if (b & 1)
            res = (1LL * res * a) % m;
        a = (1LL * a * a) % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    int t;
    ll n;
    cin >> t;

    while (t--) {
        cin >> n;
        cout << bex(bex(2, mod - 2, mod), (n - 1) % (mod - 1), mod) << endl;
    }
}
