#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                cnt++;
        }
        cout << cnt << endl;
    }
}
