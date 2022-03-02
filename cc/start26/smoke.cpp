#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int main() {
    long long t, n, x, y;
    cin >> t;

    while (t--) {
        cin >> n >> x >> y;

        long long pol = 0;
        while (n >= 100) {
            pol += min(x, y * 25);
            n -= 100;
        }
        long long cc = y * (n / 4) + (n % 4 ? y : 0);
        pol += min(cc, x);
        cout << pol << endl;
    }

}
