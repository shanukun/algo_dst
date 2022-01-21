#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> v(n + 1);
    v[0] = 0;

    for (int i = 1; i < n + 1; ++i) { 
        cin >> v[i];
        v[i] += v[i - 1];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;

        int lo = 1, hi = n, mid;

        while (hi - lo > 1) {
            mid = lo + (hi - lo) / 2;
            if (v[mid] >= t) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        if (v[lo] >= t)
            cout << lo << endl;
        else
            cout << hi << endl;
    }
}
