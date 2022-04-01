#include <bits/stdc++.h>
using namespace std;
#define int long long

int b_search(int elem, vector<int> &v)
{
    int lo = 0;
    int hi = v.size() - 1;
    int ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] > elem) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    if (ans != -1) {
        v[ans] = elem;
        return 1;
    }
    return 0;
}

int32_t main()
{
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v;
        int elem;
        for (int i = 0; i < n; i++) {
            cin >> elem;
            if (!b_search(elem, v))
                v.push_back(elem);
        }
        cout << v.size() << " ";
        for (int i = 0; i < (int) v.size(); i++) 
            cout << v[i] << " ";
        cout << "\n";
    }
}
