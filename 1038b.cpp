#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = n * (n + 1);
    sum /= 2;

    bool fl = false;
    int d;
    for (d = 2; d <= n; d++) {
        if (__gcd(d, sum - d) > 1) {
            fl = true;
            break;
        }
    }
    if (fl) {
        cout << "Yes" << endl;
        cout << 1 << " " << d << endl;
        cout << n - 1 << " ";
        for (int i = 1; i <= n; i++) {
            if (i == d) continue;
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No" << endl;
    }
}
