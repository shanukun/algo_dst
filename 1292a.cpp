#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, q, r, c;
    cin >> n >> q;
    vector<vector<int>> gm(3, vector<int>(n + 1, 0));
    set<pair<int, int>> sp;
    /* for (int i = 1; i <= 2; i++) { */
    /*     for (int j = 1; j <= n; j++) */ 
    /*         cout << gm[i][j] << " "; */
    /*     cout << endl; */
    /* } */
    while (q--) {
        cin >> r >> c;
        if (gm[r][c] == 1) {
            gm[r][c] = 0;
            int nr = r % 2 + 1;
            if (c + 1 <= n && gm[nr][c + 1] == 1) {
                if (r == 1) 
                    sp.erase({c, c + 1});
                else
                    sp.erase({c + 1, c});
            }
            if (gm[nr][c] == 1) {
                sp.erase({c, c});
            }
            if (c - 1 >= 1 && gm[nr][c - 1] == 1) {
                if (r == 1) 
                    sp.erase({c, c - 1});
                else
                    sp.erase({c - 1, c});
            }
        } else {
            gm[r][c] = 1;
            int nr = r % 2 + 1;
            if (c + 1 <= n && gm[nr][c + 1] == 1) {
                if (r == 1) 
                    sp.insert({c, c + 1});
                else
                    sp.insert({c + 1, c});
            }
            if (gm[nr][c] == 1) {
                sp.insert({c, c});
            }
            if (c - 1 >= 1 && gm[nr][c - 1] == 1) {
                if (r == 1) 
                    sp.insert({c, c - 1});
                else
                    sp.insert({c - 1, c});
            }

        }
        if (sp.size() > 0)
            cout << "No" << endl;
        else 
            cout << "Yes" << endl;
    }
}
