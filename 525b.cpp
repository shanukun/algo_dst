#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    string s;
    cin >> s;
    int m;
    int n = s.size();
    cin >> m;
    int ps[n + 1] = {0};
    while (m--) {
        int a;
        cin >> a;
        ps[a]++;
        if (a != 1)
            ps[n - a + 2]--;
    }
    for (int i = 1; i <= n; i++)
        ps[i] += ps[i - 1];

    for (int i = 1; i * 2 <= n; i++) {
        if (ps[i] & 1) {
            swap(s[i - 1], s[n - i]);
        }
    }
    cout << s << endl;

}
