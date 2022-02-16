#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    bool fl = false;

    int tp = d / t;
    if (d % t == 0) {
        if ((n - tp * k) > k)
            fl = true;
    } else {
        tp++;
        if ((n - tp * k) > 0)
            fl = true;
    }
    if (fl)
        cout << "YES";
    else 
        cout << "NO";
}
