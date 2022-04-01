#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int cnt = n - 1;
        int m[101] = {0};

        for (int i = 1; i <= n && cnt > 0; i++) {
            for (int j = 0; j < n && cnt > 0; j++) {
                if (v[j] == i) {
                    for (int k = j; k >= 0 && cnt > 0; k--) {
                        /* debug(k); */
                        if (k - 1 >= 0 && v[k - 1] > v[k] && m[k - 1] == 0) {
                            swap(v[k - 1], v[k]);
                            m[k - 1] = 1;
                            cnt--;
                        } else {
                            break;
                        }
                    }
                    break;
                }
            }
        }

        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
}
