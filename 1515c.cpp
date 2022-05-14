#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        set<pair<int, int>> st;
        int ans[n];
        for (int i = 0; i < m; i++) {
            st.insert({v[i], i});
            ans[i] = i;
        }
        for (int i = m; i < n; i++) {
            auto it = st.begin();
            pair<int, int> t = {it->first + v[i], it->second};
            ans[i] = t.ss;
            st.erase(it);
            st.insert(t);
        }
        auto it = st.begin();
        auto it1 = --st.end();
        if (it1->ff - it->ff <= x) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << ans[i] + 1 << " ";
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
