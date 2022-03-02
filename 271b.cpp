#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 1e5 + 10;
vector<bool> pr(N, true);
int32_t main() {
    pr[0] = pr[1] = false;
    for (int i = 2; i < N; i++) {
        if (pr[i]) {
            for (int j = 2 * i; j < N; j += i) {
                pr[j] = false;
            }
        }
    }
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int mv = 0;
        for (int j = 0; j < m; j++) {
            if (!pr[mat[i][j]]) {
                for (int k = mat[i][j]; k < N; k++) {
                    if (pr[k]) {
                        mv += k - mat[i][j];
                        break;
                    }
                }
            }
        }
        mn = min(mv, mn);
    }
    for (int i = 0; i < m; i++) {
        int mv = 0;
        for (int j = 0; j < n; j++) {
            if (!pr[mat[j][i]]) {
                for (int k = mat[j][i]; k < N; k++) {
                    if (pr[k]) {
                        mv += k - mat[j][i];
                        break;
                    }
                }
            }
        }
        mn = min(mv, mn);
    }
    cout << mn << endl;
}
