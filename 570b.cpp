#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m;
    cin >> n >> m;
    if (n - m <= m - 1) {
        if (m - 1 >= 1)
            cout << m - 1;
        else if (m + 1 >= n)
            cout << m;
        else
            cout << m + 1;
    } else if (n - m > m - 1) {
        cout << m + 1;
    }
    cout << endl;
}
