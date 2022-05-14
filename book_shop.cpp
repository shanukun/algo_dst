#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

/* #define int long long */
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

/* vector<vector<int>> dp(1000, vector<int>(1e5 + 1, 0)); */
/* const int N = 1000; */
/* int dp[1000][10001]; */

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> h(n);
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= x; j++) {
            dp[i + 1][j] = dp[i][j];
            if (j >= h[i]) {
                dp[i + 1][j] = max(dp[i + 1][j], s[i] + dp[i][j - h[i]]);
            }
        }
    }

    /* vector<vector<int>> dp(n, vector<int>(x + 1, 0)); */
    /* for (int i = 0; i <= x; i++) */
    /*     if (h[0] <= i) dp[0][i] = s[0]; */

    /* for (int i = 1; i < n; i++) { */
    /*     for (int j = 0; j <= x; j++) { */
    /*         dp[i][j] = dp[i - 1][j]; */
    /*         if (j >= h[i]) { */
    /*             dp[i][j] = max(dp[i][j], s[i] + dp[i - 1][j - h[i]]); */
    /*         } */
    /*     } */
    /* } */
    /* cout << dp[n - 1][x] << endl; */
    cout << dp[n][x] << endl;
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
