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
    int ts = 0;
    for (int i = 0; i < n; i++)
        ts += s[i] - '0';
    bool fl;
    int cs = 0;
    int ss = 0;
    for (int i = 0; i < n; i++) {
        cs += s[i] - '0';
        ss = 0;
        vector<int> v;
        v.push_back(cs);
        fl = true;
        for (int j = i + 1; j < n; j++) {
            int d = s[j] - '0';
            if (ss + d > cs) {
                v.push_back(ss);
                ss = d;
            } else {
                ss += d;
            }
        }
        v.push_back(ss);
        for (int i = 1; i < (int) v.size(); i++) {
            if (v[0] != v[i])
                fl = false;
        }
        if (fl) break;
    }
    cout << (fl ? "YES" : "NO") << endl;
}
