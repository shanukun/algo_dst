#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int ans = 0;
        unordered_set<char> st;
        for (int i = 0; i < n; i++) {
            if (st.find(s[i]) != st.end()) {
                ans += sz(st) - 1;
                st.clear();
            } else {
                st.insert(s[i]);
            }
        }
        ans += st.size();
        cout << ans << endl;
    }
}
