#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, ds = 0, di;
    cin >> k;
    string n;
    cin >> n;

    sort(n.begin(), n.end());

    for (int i = 0; i < (int) n.size(); i++)
        ds += n[i] - '0';


    int cnt = 0;
    if (ds >= k) {
        cout << 0;
    } else {
        int d;
        di = k - ds;
        for (int i = 0; i < (int) n.size(); i++) {
            d = n[i] - '0';
            if (d == 9) continue;
            di -= 9 - d;
            cnt++;
            if (di <= 0) break;
        }
        cout << cnt;
    }
}
