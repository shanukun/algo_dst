#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int N = 1e9;

int32_t main() {
    int t;
    cin >> t;
    if (t & 1) {
        cout << -1 << endl;
    } else {
        int hf = N / 2;
        cout << 0 << " " << hf << endl;
        cout << t << " " << hf << endl;
        cout << t / 2 << " " << hf + t / 2 << endl;
        cout << t / 2 << " " << hf - t / 2 << endl;

    }
}
