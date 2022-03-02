#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    int ans[n];
    ans[0] = mat[0][n - 1] * mat[0][n - 2];
    ans[0] /= mat[n - 2][n - 1];
    ans[0] = sqrt(ans[0]);
    for (int i = 1; i < n; i++) {
        ans[i] = mat[0][i] / ans[0];
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}
