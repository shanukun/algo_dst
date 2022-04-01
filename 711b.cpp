#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 507;
 
int mat[N][N];
 
int32_t main() {
    int n; 
    cin >> n;

    if (n == 1) {
        cout  <<  "1" << endl;
        return 0;
    }

    int r, c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (!mat[i][j]) {
                r = i;
                c = j;
            }
        }
    }

    int k = 0;
    if (!r) k = 1;

    int s = 0, t = 0;
    for (int i = 0; i < n; i++) {
        s += mat[k][i];
        t += mat[r][i];
    }

    mat[r][c] = s - t;

    int z = 0, w = 0;
    for (int i = 0; i < n; i++) {
        int x = 0, y = 0;
        z += mat[i][i];
        w += mat[i][n - 1 - i];
        for(int j = 0; j < n; j++){
            x += mat[i][j];
            y += mat[j][i];
        }
        if (x != s || y != s) {
            cout  <<  "-1" << endl;
            return 0;
        }
    }
    if (z != s || w != s || mat[r][c] < 1)
        cout << "-1" << endl;
    else
        cout << mat[r][c] << endl;
}
