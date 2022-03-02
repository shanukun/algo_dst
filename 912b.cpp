#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, k;
    cin >> n >> k;
    
    if (k == 1) {
        cout << n << endl;
    } else {
        int res = 1;
        while (res <= n)
            res <<= 1;
        cout << res - 1 << endl;
    }

}
