#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 2e5 + 10;

vector<pair<int, pair<int, int>>> vec(N);
int32_t main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) 
        cin >> vec[i].ss.ff;
    for (int i = 0; i < n; i++) {
        cin >> vec[i].ss.ss;
        vec[i].ff = vec[i].ss.ff - vec[i].ss.ss;
    } 
    sort(vec.begin(), vec.begin() + n);

    long long tc = 0;
    for (int i = 0; i < n; i++) {
        if (i >= k) {
            tc += min(vec[i].ss.ff, vec[i].ss.ss);
        } else {
            tc += vec[i].ss.ff;
        }
    }
    cout << tc << endl;
}
