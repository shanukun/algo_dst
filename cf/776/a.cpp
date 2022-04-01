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
        string s;
        cin >> s;
        char c;
        cin >> c;
        int n = s.size();
        bool fl = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                int b = n - 1 - i;
                if (i % 2 == 0 && b % 2 == 0)
                    fl = true;
            }
            if (fl) break;
        }
        if (fl) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
