#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<bool> v(n + 1, false);
    int i = 0, j = 0;
    int cnt = 0;
    while (i < n && j < n) {
        if (v[a[i]]) {
            i++;
            continue;
        }

        if (a[i] == b[j]) {
            i++;
            j++;
        } else {
            v[b[j++]] = true;
            cnt++;
        }
    }
    cout << cnt << endl;

}
