#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];
    for (int i = 1; i <= n; i++) {
        if (v[n] % 2 == 0) {
            if (v[i] >= v[n] / 2) {
                cout << i << endl;
                break;
            }
        } else {
            if (v[i] > v[n] / 2) {
                cout << i << endl;
                break;
            }

        }


    }
}
