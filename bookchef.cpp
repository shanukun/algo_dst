#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m;
    cin >> n >> m;
    unordered_set<int> sset;
    while (n--) {
        int num;
        cin >> num;
        sset.insert(num);
    }
    vector<pair<int, string>> sp;
    vector<pair<int, string>> np;
    while (m--) {
        int f, p; 
        string s;
        cin >> f >> p >> s;

        if (sset.find(f) != sset.end()) {
            sp.push_back({p, s});
        } else {
            np.push_back({p, s});
        }
    }
    sort(np.rbegin(), np.rend());
    sort(sp.rbegin(), sp.rend());
    for (auto x : sp) 
        cout << x.ss << endl;
    for (auto x : np) 
        cout << x.ss << endl;
}
