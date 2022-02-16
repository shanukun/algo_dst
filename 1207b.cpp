#include <bits/stdc++.h>
using namespace std;
const int N = 51;

int mat[N][N];
int matb[N][N];

bool checkij(int i, int j) {
    if (mat[i][j] && mat[i + 1][j] && mat[i][j + 1] && mat[i + 1][j + 1])
        return true;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    set<pair<int, int>> s;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (checkij(i, j)) {
                matb[i][j] = 1;
                matb[i + 1][j] = 1;
                matb[i][j + 1] = 1;
                matb[i + 1][j + 1] = 1;
                s.insert({i + 1, j + 1});
            }
        }
    }
    bool fl = true;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            if (mat[i][j] != matb[i][j])
                fl = false;
    if (fl) {
        cout << s.size() << endl;
        for (auto x: s) 
            cout << x.first << " " << x.second << endl;
    } else {
        cout << -1 << endl;
    }

}
