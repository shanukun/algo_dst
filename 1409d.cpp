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

const int inf = 999999999999999999;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, num;
        cin >> n >> s;
        num = n;
        vector<int> v(18, 0);
        int k = 0;
        while (n > 0) {
            v[k++] = n % 10;
            n /= 10;
        }
        reverse(all(v));
        int ans = inf;
        int cur_sum = 0;
        int cur_num = 0;
        for (int i = 0; i < 18; i++) {
            int this_num = v[i];

            while (this_num <= 9) {
                int cn = cur_num + this_num;
                cn *= pow(10, 18 - i - 1);
                if (cur_sum + this_num <= s && cn >= num)
                    ans = min(ans, cn - num);
                this_num++;
            }

            cur_num += v[i];
            cur_num *= 10;
            cur_sum += v[i];
        }
        if (ans == inf) ans = inf - num + 1;
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
