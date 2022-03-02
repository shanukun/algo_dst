#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int f[10];
    for (int i = 1; i <= 9; i++) 
        cin >> f[i];

    bool p = false;
    for (int i = 0; i < n; i++) {
        int d = s[i] - '0';
        if (d < f[d]) {
            s[i] = '0' + f[d];
            p = true;
        } else if (p) {
            if (d == f[d]) continue;
            break;
        }
    }
    cout << s << endl;
}
