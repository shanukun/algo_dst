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

const int N = 2e5;
void solve() {
    int t;
    cin >> t;
    /* t = 1; */
    while (t--) {
        int n, l, r, x;
        cin >> n >> l >> r;
        int L[N + 1] = {0};
        int R[N + 1] = {0};
        for (int i = 0; i < l; i++) {
            cin >> x;
            L[x]++;
        }
        for (int i = 0; i < r; i++) {
            cin >> x;
            R[x]++;
        }
        for (int i = 1; i <= N; i++) {
            int mn = min(L[i], R[i]);
            L[i] -= mn;
            R[i] -= mn;
            l -= mn;
            r -= mn;
        }
        if (l < r) {
            swap(l, r);
            swap(L, R);
        }
        int mc = 0;
        for (int i = 1; i <= N; i++) {
            int ex = l - r;
            int cbp = L[i] / 2;
            int p = min(cbp * 2, ex);
            mc += p / 2;
            l -= p;
        }
        mc += (l - r) / 2 + (l + r) / 2;

        cout << mc << endl;
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
