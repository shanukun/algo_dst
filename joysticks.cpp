#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    int cnt = 0;
    cin >> n >> m;

    while ((n > 1 || m > 1) && (n != 0 && m != 0)) {
        if (n <= m) {
            n += 1;
            m -= 2;
            cnt++;
        } else {
            int t;
            t = n;
            n = m;
            m = t;
        }
    }
    cout << cnt << endl;
}
