#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> v[i];

    vector<int> ps(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ps[i] = v[i];
        if (ps[i - 1] != 0)
            ps[i] += ps[i - 1];
    }

    bool flag = true;
    int cnt = 0;
    unordered_set<int> st;
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (ps[i] == 0) {
            ans.push_back(++cnt);
            st.clear();
            cnt = 0;
        } else if (st.find(abs(v[i])) != st.end()) {
            if (st.find(v[i]) != st.end() && v[i] < 0) {
                flag = false;
                break;
            }
            if (v[i] > 0) {
                flag = false;
                break;
            }
            st.insert(v[i]);
            cnt++;
        } else {
            if (v[i] < 0) {
                flag = false;
                break;
            }
            st.insert(v[i]);
            cnt++;
        }
    }

    if (ps[n] != 0)
        flag = false;
    if (flag) {
        cout << ans.size() << endl;
        for (int x : ans)
            cout << x << " ";
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}
