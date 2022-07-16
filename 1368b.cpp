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
    int k;
    cin >> k;
    vector<int> sb(10, 1);
    /* map<int, int> pf; */
    /* for (int i = 2; i * i <= k; i++) { */
    /*     while (k % i == 0) { */
    /*         pf[i]++; */
    /*         k /= i; */
    /*     } */
    /* } */
    /* if (k > 1) { */
    /*     pf[k]++; */
    /* } */
    /* int i = 0; */
    /* for (auto x : pf) { */
    /*     while (x.ss > 0) { */
    /*         int ci = (i++) % 10; */
    /*         sb[ci] *= x.ff; */
    /*         (x.ss)--; */
    /*     } */
    /* } */
    int n = 1;
    while (n < k) {
        int i = 0;
        while (i < 10 && n < k) {
            n /= sb[i];
            sb[i]++;
            n *= sb[i];
            i++;
        }
    }
    string s = "codeforces";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < sb[i]; j++)
            cout << s[i];
    }
    cout << endl;
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
