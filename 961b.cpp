#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    long long tot = 0;;
    cin >> n >> k;

    vector<long long> v(n + 1);
    vector<long long> ps(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<long long> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        if (b[i]) {
            tot += v[i];
            v[i] = 0;
        }
    }
    for (int i = 1; i <= n; i++) 
        ps[i] = ps[i - 1] + v[i];

    long long mx = 0;
    for (int i = 1; i <= n - k + 1; i++)
        mx = max(mx, ps[i + k - 1] - ps[i - 1]);

    cout << tot + mx << endl;
}
