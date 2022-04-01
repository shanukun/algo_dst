#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int mod = 1e9 + 7;
const int N = 1001;
 
int be(int b) {
    int a = 2;
    int ans = 1;
    while (b > 0) {
        if (b & 1) 
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
 
int m[N][N];
int32_t main() {
    int h, w, r, c;
    cin >> h >> w;
 
    bool fl = true;
    for (int i = 0; i < h; i++) {
        cin >> r;
        for (int j = 0; j < r; j++) {
            if (m[i][j] == -1)
                fl = false;
            m[i][j] = 1;
        }

        if (r != w) {
            if (m[i][r] != 1)
                m[i][r] = -1;
            else 
                fl = false;
        }
    }
 
    for (int i = 0; i < w; i++) {
        cin >> c;
        for (int j = 0; j < c; j++) {
            if (m[j][i] == -1)
                fl = false;
            m[j][i] = 1;
        }

        if (c != h) {
            if (m[c][i] != 1)
                m[c][i] = -1;
            else 
                fl = false;
        }
    }
 
    int cnt = 0;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            if (m[i][j] == 0) 
                cnt++;
 
    int ans = be(cnt) % mod;
    cout << (fl ? ans : 0) << endl;
}
