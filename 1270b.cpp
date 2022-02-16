#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        bool fl = false;
        for (int i = 1; i < n; i++) {
            if (abs(v[i] - v[i - 1]) > 1) {
                cout << "YES\n" << i << " " << i + 1 << endl;
                fl = true;
                break;
            }
        }
        if (!fl) cout << "NO\n";
    }
}
