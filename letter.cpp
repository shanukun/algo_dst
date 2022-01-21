#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int u = n + 1, d = -1, l = m + 1, r = -1;
    
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        for (int j = 0; j < m; ++j) {
            if (v[i][j] == '*') {
                u = min(u, i);
                l = min(l, j);
                d = max(d, i);
                r = max(r, j);
            }
        }
    }
    for (int i = u; i <= d; i++) {
        for (int j = l; j <= r; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }
}
