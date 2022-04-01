#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    vector<int> av = v;
    sort(av.begin(), av.end());
    vector<pair<int, int>> ans;

    int swap_cnt = 0;
    for (int i = 0; i < n; i++) {
        if (av[i] == v[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (av[i] == v[j]) {
                swap_cnt++;
                swap(v[i], v[j]);
                ans.push_back({j, i});
                break;
            }
        }
    }
    assert(swap_cnt <= n - 1);

    int ns = ans.size();
    cout << ns << endl;
    if (ns > 0) {
        for (auto x : ans)
            cout << x.ff << " " << x.ss << endl;
    }
}
