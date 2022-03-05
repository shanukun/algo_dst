#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    while (n + m >= 3 && n > 0 && m > 0) {
        if (n <= m) {
            n--;
            m -= 2;
        } else {
            n -= 2;
            m--;
        } 
        cnt++;
    }
    cout << cnt << endl;
}
