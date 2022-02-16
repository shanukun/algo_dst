#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    sort(v.begin(), v.end());

    long long ans = 0;
    for (int c : v) {
        ans += 1LL * x * c; 
        x = (x != 1 ? max(x - 1, 1) : 1);
    }
    cout << ans << endl;
}
