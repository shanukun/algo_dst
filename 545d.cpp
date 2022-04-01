#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int t = 0;
    int cnt = 0;
    int i = 0;
    while (i < n) {
        if (t <= v[i]) {
            cnt++;
            t += v[i];
            i++;
        } else {
            i++;
        }
    }
    cout << cnt << endl;
}
