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

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ev_sum = 0, od_sum = 0;
        int ev_min = v[0], od_min = v[1];
        int ev_tot = 1, od_tot = 1;
        int ans = n * v[0] + n * v[1];
        int cur_sm = ans;
        for (int i = 2; i < n; i++) {
            if (i % 2 == 0) {
                if (v[i] < ev_min) {
                    ev_sum += ev_min;
                    ev_min = v[i];
                } else {
                    ev_sum += v[i];
                }
                ev_tot++;
            } else {
                if (v[i] < od_min) {
                    od_sum += od_min;
                    od_min = v[i];
                } else {
                    od_sum += v[i];
                }
                od_tot++;
            }
            if (ev_tot + 1 > n) break;
            if (od_tot + 1 > n) break;
            /* debug(make_pair(make_pair(ev_sum, ev_min), */
            /*                 make_pair(od_sum, od_min))); */
            /* debug(make_pair(ev_tot, od_tot)); */
            cur_sm = ev_sum + (n - ev_tot + 1) * ev_min + od_sum +
                     (n - od_tot + 1) * od_min;
            ans = min(ans, cur_sm);
        }
        cout << ans << endl;
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
