#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, k;
    cin >> n >> k;
    string t;
    cin >> t;

    int li = -1;
    for (int i = n - 1; i > 0; i--) {
        int k = i;
        int j = 0;
        while (k < n && j < n) {
            if (t[k] != t[j]) break;
            k++;
            j++;
        }
        if (k == n)
            li = max(li, j - 1);
    }

    string s = t;
    for (int j = 1; j < k; j++) {
        for (int k = li + 1; k < n; k++) {
            s.push_back(t[k]);
        }
    }
    cout << s << endl;
}
