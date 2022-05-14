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

const int inf = 1e18;
const int N = 1e6 + 3;
int dp[N];
int rec(int n) {
    if (n == 0) return 0;

    if (dp[n] != -1) return dp[n];
    int ans = inf;
    int on = n;
    while (on > 0) {
        int d = on % 10;
        on /= 10;
        if (d > 0 && n - d >= 0) {
            ans = min(ans, 1 + rec(n - d));
        }
    }
    return dp[n] = ans;
}

void solve() {
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    /* vector<int> dp(n + 1, inf); */
    /* dp[0] = 0; */
    /* for (int i = 1; i <= n; i++) { */
    /*     int on = i; */
    /*     while (on > 0) { */
    /*         int d = on % 10; */
    /*         on /= 10; */
    /*         if (d > 0) dp[i] = min(dp[i], 1 + dp[i - d]); */
    /*     } */
    /* } */
    /* cout << dp[n] << endl; */
    cout << rec(n) << endl;
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
