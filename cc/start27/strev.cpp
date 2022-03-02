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
        string s;
        cin >> s;
        int n = s.size();

        string t = s;
        reverse(t.begin(), t.end());
        if (t == s) {
            cout << 0 << endl;
        } else {
            int sm = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == s[n - 1 - i])
                    sm++;
                else break;
            }
            cout << n - sm - 1 << endl;
        }
    }

}
