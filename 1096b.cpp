#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define M 998244353

int32_t main() {
    int num;
    cin >> num;
    string s;
    cin >> s;
    
    int cnt = 0;
    int m = 1, n = 1;
    for (int i = 1; i < num; i++) {
        if (s[i] != s[i - 1]) break;
        m++;
    }
    for (int i = num - 2; i >= 0; i--) {
        if (s[i] != s[i + 1]) break;
        n++;
    }
    if (m == n && m == num) {
        cnt = n * (n + 1);
        cnt /= 2;

    } else if (m + n == num) {
        cnt = n + m + 1;
    } else {
        if (s[0] != s[num - 1]) {
            cnt = n + m + 1;
        } else {
            cnt = (n + 1) * (m + 1);
        }
    }
    cout << cnt % M << endl;
}
