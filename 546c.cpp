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
    int n;
    cin >> n;
    int p, q;
    cin >> p;
    queue<int> q1;
    queue<int> q2;
    for (int i = 0; i < p; i++) {
        int num;
        cin >> num;
        q1.push(num);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int num;
        cin >> num;
        q2.push(num);
    }
    queue<int> q11 = q1;
    queue<int> q22 = q2;
    int steps = 0;
    int cnt = 0;
    while (!q1.empty() && !q2.empty()) {
        int x = q1.front();
        int y = q2.front();
        q1.pop();
        q2.pop();
        if (x < y) {
            q2.push(x);
            q2.push(y);
        } else {
            q1.push(y);
            q1.push(x);
        }
        steps++;
        cnt++;
        if (cnt > 4000) {
            steps = -1;
            break;
        }
    }
    int winner;
    if (q1.empty())
        winner = 2;
    else
        winner = 1;

    if (steps != -1) {
        cout << steps << " " << winner << endl;
    } else {
        cout << steps << endl;
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
