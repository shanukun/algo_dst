#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#define int long long
#define ff first
#define ss second
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

// clang-format off
#ifdef PRATHCP
#define debug(x) cerr << #x << " : "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(int a) { cerr << a; }
void _print(string a) { cerr << a; }

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(set<T> s1);
template <class T> void _print(vector<T> v1);
template <class T, class V> void _print(map<T, V> m1);
template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(set<T> s1) { cerr << "["; for (T i : s1) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(vector<T> v1) { cerr << "["; for (T i : v1) { _print(i); cerr << " ";} cerr << "\b]"; }
template <class T, class V> void _print(map<T, V> m1) { cerr << "["; for (auto x : m1) { _print(x); cerr << " "; } cerr << "\b]"; }
// clang-format on
/* ------------------------------------------------------------------------- */

int dp[5001][5001];
int ed(int i, int j, string &s1, string &s2) {
    if (i < 0 && j >= 0) return j + 1;
    if (j < 0 && i >= 0) return i + 1;
    if (i < 0 && j < 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];

    int ans = 1e9;
    if (s1[i] == s2[j]) {
        ans = min(ans, ed(i - 1, j - 1, s1, s2));
    } else {
        ans = min(ans, 1 + ed(i - 1, j - 1, s1, s2));
        ans = min(ans, 1 + ed(i - 1, j, s1, s2));
        ans = min(ans, 1 + ed(i, j - 1, s1, s2));
    }
    return dp[i][j] = ans;
}

void solve() {
    memset(dp, -1, sizeof(dp));
    string s1, s2;
    cin >> s1 >> s2;
    cout << ed(sz(s1) - 1, sz(s2) - 1, s1, s2) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifdef PRATHCP
    freopen("err", "w", stderr);
#endif
    auto start1 = high_resolution_clock::now();
    solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef PRATHCP
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
}
