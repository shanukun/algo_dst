#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    string s;
    cin >> s;
    int n = s.size();

    int v = 3, h = 3;
    for (int k = 0; k < n; k++) {
        if (s[k] == '0') {
            cout << v << " " << 1 << endl;
            if (v == 3) 
                v = 1;
            else 
                v = 3;
        } else {
            cout << 1 << " " << h << endl;
            if (h == 3)
                h = 1;
            else 
                h = 3;
        }
    }
}
