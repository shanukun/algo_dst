#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x.begin(), x.end());

    cin >> q;
    long long m;
    for (int i = 0; i < q; i++) {
        cin >> m;
        int lo = 0;
        int hi = n;
        while (hi - lo > 1) {
            int mid = lo + (hi - lo) / 2;
            if (x[mid] <= m) {
                lo = mid;
            } else {
                hi = mid;
            }
        }
        if (x[0] > m)
            cout << 0 << endl;
        else
            cout << lo + 1 << endl;
    }
}
