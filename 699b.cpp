#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m;
    cin >> n >> m;

    char mat[n][m];
    int ra[n] = {0};
    int ca[m] = {0};
    int cur = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == '*') {
                cur++;
                ra[i]++;
                ca[j]++;
            }
        }
    }

    bool fl = false;
    int r, c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cnt = ra[i] + ca[j];
            if (mat[i][j] == '*')
                cnt--;
            if (cur == cnt) {
                fl = true;
                r = i;
                c = j;
                break;
            }
        }
        if (fl) break;
    }
    if (fl) {
        cout << "YES" << endl;
        cout << r + 1 << " " << c + 1 << endl;
    } else {
        cout << "NO" << endl;
    }
}
