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

void dfs(vector<vector<int>> &g, map<pair<int, int>, int> &mp, vector<bool> &m,
         int se, int p) {
    m[se] = true;
    for (int x : g[se]) {
        if (m[x]) continue;
        mp[{se, x}] = p;
        mp[{x, se}] = p;
        dfs(g, mp, m, x, 5 - p);
    }
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> g(n + 1);
        vector<pair<int, int>> v;
        vector<int> ce(n + 1, 0);
        for (int i = 0; i < n - 1; i++) {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
            g[x].push_back(y);
            g[y].push_back(x);
            ce[x]++;
            ce[y]++;
        }
        int sn = -1;
        int mx = -1;
        for (int i = 0; i < n; i++) {
            if (ce[i + 1] == 1) {
                sn = i + 1;
            }
            mx = max(mx, ce[i + 1]);
        }
        if (mx > 2) {
            cout << -1 << endl;
            continue;
        }
        map<pair<int, int>, int> mp;
        vector<bool> m(n + 1);
        dfs(g, mp, m, sn, 2);
        for (int i = 0; i < n - 1; i++) {
            cout << mp[v[i]] << " ";
        }
        cout << endl;
    }
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
