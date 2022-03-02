#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        string a, b;
        a.push_back('1');
        b.push_back('1');
        bool nsz = true;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] == b[i - 1] && nsz) {
                if (s[i] == '2') {
                    a.push_back('1');
                    b.push_back('1');
                } else if (s[i] == '1') {
                    a.push_back('1');
                    b.push_back('0');
                    nsz = false;
                } else {
                    a.push_back('0');
                    b.push_back('0');
                }
            } else {
                if (s[i] == '2') {
                    a.push_back('0');
                    b.push_back('2');
                } else if (s[i] == '1') {
                    a.push_back('0');
                    b.push_back('1');
                } else {
                    a.push_back('0');
                    b.push_back('0');
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
}
