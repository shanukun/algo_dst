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
#define debug(x) cerr << #x << ": "; _print(x); cerr << endl;
#else
#define debug(x) ;
#endif

void _print(int a) { cerr << a; }
void _print(string a) { cerr << a; }

template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.ff); cerr << ", "; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector<T> v1) { cerr << "["; for (T i : v1) _print(i); cout << "]"; }
template <class T> void _print(set<T> s1) { cerr << "["; for (T i : s1) _print(i); cout << "]"; }
template <class T> void _print(map<T, T> m1) { cerr << "["; for (auto &x : m1) { _print(x); cerr << " "; } cerr << "\b]"; }
// clang-format on
// ------------------------------------------------------------------------ //

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        vector<pair<int, int>> v(k);
        map<int, int> ma;
        map<int, int> mb;
        for (int i = 0; i < k; i++) {
            cin >> v[i].ff;
            ma[v[i].ff]++;
        }
        for (int i = 0; i < k; i++) {
            cin >> v[i].ss;
            mb[v[i].ss]++;
        }
        int ans = 0;
        int cnt = k;
        for (int i = 0; i < k - 1; i++) {
            ma[v[i].ff]--;
            mb[v[i].ss]--;
            int lst = cnt - max(0LL, ma[v[i].ff]) - max(0LL, mb[v[i].ss]);
            ans += lst - 1;
            cnt--;
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
