#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        vector<int> cnt(51, 0);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = n - 1; i >= 0; --i) {
            int vi = v[i];
            while (vi > n)
                vi /= 2;
            if (cnt[vi] == 0)
                cnt[vi] = 1;
            else {
                while (vi > 0) {
                    if (cnt[vi] == 0) {
                        cnt[vi] = 1;
                        break;
                    }
                    vi /= 2;
                }
            }
        }
        int f = 0;
        for (int i = 1; i <= n; ++i) {
            if (cnt[i] != 1) {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "YES" << endl;
    }
}
