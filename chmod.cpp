#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t, l, r;
    long long M;
    cin >> n;
    vector<int> v(n + 1);

    v[0] = 1;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; ++i)
        v[i] *= v[i - 1];

    cin >> t;
    
    while (t--) {
        cin >> l >> r >> M;
        long long ans = (v[r] / v[l - 1]) % M;
        cout << ans << endl;
    }
}
