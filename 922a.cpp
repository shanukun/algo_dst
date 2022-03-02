#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int x, y;
    cin >> x >> y;
    if (x > 0 && y - 1 > 0) {
        if (x >= y - 1) {
            if ((x - y + 1) % 2 == 0)
                cout << "YES\n";
            else 
                cout << "NO\n";
        } else {
            cout << "NO\n";
        }  

    } else if (x == 0 && y == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
