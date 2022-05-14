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

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        map<int, vector<long long>> mv;
        for (int i = 0; i < n; i++) {
            int s;
            cin >> s;
            mv[v[i]].push_back(s);
        }
        for (auto &x : mv) {
            sort(all(x.ss));
            for (int i = 1; i < sz(x.ss); i++) {
                (x.ss)[i] += (x.ss)[i - 1];
            }
        }
        vector<long long> ans(n + 1, 0);
        for (auto x : mv) {
            for (int i = 1; i <= sz(x.ss); i++) {
                int ne = sz(x.ss);
                int rem = ne % i;
                ans[i] += (x.ss)[ne - 1] - (rem > 0LL ? (x.ss)[rem - 1] : 0LL);
            }
        }
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
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
