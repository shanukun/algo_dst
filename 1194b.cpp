#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int q;
    cin >> q;
    while (q--) {
        int n, m;
        cin >> n >> m;
        int row[n] = {0};
        int col[m] = {0};
        int mat[n][m];

        char c;
        int mxr = 0;
        int mxc = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> c;
                mat[i][j] = c;
                if (c == '*') {
                    col[j]++;
                    row[i]++;
                }
                mxc = max(mxc, col[j]);
            }
            mxr = max(mxr, row[i]);
        }
        int cost = 0;
        int ncol[m] = {0};
        for (int i = 0; i < n; i++) {
            if (row[i] == mxr) {
                for (int j = 0; j < m; j++) {
                    if (mat[i][j] != '*') {
                        mat[i][j] = '*';
                        ncol[j] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < m; i++) {
            if (ncol[i] == 1) {
                col[i]++;
                mxc = max(mxc, col[i]);
            }
        }
        cost += n - mxr;
        cost += m - mxc;
        cout << cost << endl;

    }
}
