#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n, p, q, k, ti;
    cin >> m >> n >> p >> q >> k;
    ti = 0;
    if (p <= n && q >= m) {
        if (p > m)
            m = p; 
        ti += (n - m + 1);
        if (q < n) {
            ti -= (n - q);
            n = q;
        }
        if (k >= m && k <= n)
            ti -= 1;
    }
    cout << ti;
}
