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
        map<int, int> mp;
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            st.insert(num);
            mp[num]++;
        }
        int ans = 0;
        for (auto p : st) {
            int x = 0, y = 0, z = 0;
            x = mp[p];
            if (mp.count(p + 1) > 0) y = mp[p + 1];
            if (mp.count(p + 2) > 0) z = mp[p + 2];
            ans += x * y * z;
            ans += x * (y * (y - 1)) / 2;
            ans += x * (z * (z - 1)) / 2;
            ans += (x * (x - 1)) / 2 * y;
            ans += (x * (x - 1)) / 2 * z;
            ans += (x * (x - 1) * (x - 2)) / 6;
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
