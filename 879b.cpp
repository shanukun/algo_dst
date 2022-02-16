#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    int ans, tom, i;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    i = 1;
    ans = v[0];
    tom = 0;
    k = min(n, k);
    while (tom < k) {
        if (ans < v[i]) {
            ans = v[i];
            tom = 1;
        } else {
            tom++;
        }
        i = (i + 1) % n;
    }
    cout << ans << endl;
}
