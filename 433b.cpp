#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, op, l, r;
    cin >> n;

    vector<long long> v(n + 1, 0);
    vector<long long> ps(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        ps[i] = ps[i - 1] + v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++) 
        v[i] += v[i - 1];

    cin >> m;
    while (m--) {
        cin >> op >> l >> r;
        if (op == 1)
            cout << ps[r] - ps[l - 1] << endl;
        else 
            cout << v[r] - v[l - 1] << endl;
    }
}
