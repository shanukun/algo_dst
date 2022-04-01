#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (m.find(num) != m.end())
                m[num]++;
            else
                m[num] = 1;
        }
        vector<int> v;
        for (auto x : m) 
            v.push_back(x.ss);
        sort(v.begin(), v.end());
        int sz = v.size();
        int ans = v[sz - 1];
        ans = max(2LL, ans);
        if (sz == 1) {
            cout << 0 << endl;
        } else if (sz == 2) {
            cout << n - 2 << endl;
        } else {
            cout << n - ans << endl;
        }


    }
}
