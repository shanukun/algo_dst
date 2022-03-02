#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m, num;
    cin >> n >> m;
    unordered_map<int, bool> hash;
    for (int i = 0; i < n; i++) {
        cin >> num;
        hash[num] = true;
    }

    vector<int> ans;
    for (int i = 1; i <= 1e9 && m > 0; i++) {
        if (hash.find(i) == hash.end()) {
            if (i <= m) {
                m -= i;
                ans.push_back(i);
            } else {
                break;
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < (int) ans.size(); i++) 
        cout << ans[i] << " ";
    if (ans.size() > 0) cout << endl;
}
