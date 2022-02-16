#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];

        bool fl = false;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 2; j < n; j++) {
                if (v[i] == v[j]) {
                    fl = true;
                    break;
                }
            }
            if (fl) break;
        }
        cout << (fl ? "YES" : "NO") << endl;
    }
}
