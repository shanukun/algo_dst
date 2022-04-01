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
        unordered_set<string> st;
        vector<string> v;
        while (n--) {
            string s;
            cin >> s;
            st.insert(s);
            v.push_back(s);
        }
        unordered_set<string> tst = st;
        int cnt = 0;
        for (int k = 0; k < (int) v.size(); k++) {
            if (st.find(v[k]) == st.end()) {
                cnt++;
                string sp = v[k];
                int i = 0, d = 0;
                while (tst.find(v[k]) != tst.end() && i < 4) {
                    if (d == 10) {
                        i++;
                        v[k] = sp;
                        d = 0;
                    }
                    v[k][i] = '0' + d;
                    d++;
                }
                tst.insert(v[k]);
            } else {
                st.erase(v[k]);
            }
        }
        cout << cnt << endl;
        for (string x : v) {
            cout << x << endl;
        }
    }
}
