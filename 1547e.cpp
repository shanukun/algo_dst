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

const int inf = 1e10;
void solve() {
    int q;
    cin >> q;
    while (q--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        vector<int> v(n, inf);
        vector<int> rv(n, inf);
        for (int i = 0; i < k; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++) {
            int t;
            cin >> t;
            v[a[i] - 1] = t;
            rv[a[i] - 1] = t;
        }
        int mini = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] < v[mini] + (i - mini)) {
                mini = i;
            }
            v[i] = v[mini] + (i - mini);
        }
        mini = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (rv[i] < rv[mini] + (mini - i)) {
                mini = i;
            }
            rv[i] = rv[mini] + (mini - i);
        }
        for (int i = 0; i < n; i++) {
            cout << min(v[i], rv[i]) << " ";
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
