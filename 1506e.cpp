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
        vector<int> q(n);
        set<int> de;
        int le = -1;
        for (int i = 0; i < n; i++) {
            cin >> q[i];
            if (q[i] == le)
                q[i] = -1;
            else
                le = q[i];
            de.insert(q[i]);
        }
        set<int> rem_n;
        for (int i = 1; i <= n; i++) {
            if (de.count(i) <= 0) rem_n.insert(i);
        }
        vector<int> ans1 = q;
        vector<int> ans2 = q;
        auto it = rem_n.begin();
        for (int i = 0; i < n; i++) {
            if (ans1[i] == -1) {
                ans1[i] = *it;
                it++;
            }
        }
        le = ans2[0];
        for (int i = 0; i < n; i++) {
            if (ans2[i] == -1) {
                auto it = rem_n.upper_bound(le);
                it--;
                ans2[i] = *it;
                rem_n.erase(it);
            } else {
                le = ans2[i];
            }
        }
        for (int i = 0; i < n; i++)
            cout << ans1[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << ans2[i] << " ";
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
