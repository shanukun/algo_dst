#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

string rot(string s, int l, int r, int k) {
    int n = r - l + 1;
    string t;
    for (int i = l; i <= r; i++)
        t.push_back(s[i]);
    for (int i = 0; i < n; i++)
        s[l + (i + k) % n] = t[i];
    return s;
}

int32_t main() {
    string s;
    cin >> s;
    int m, l, r, k;
    cin >> m;
    while (m--) {
        cin >> l >> r >> k;
        s = rot(s, l - 1, r - 1, k % (r - l + 1));
    }
    cout << s << endl;
}
