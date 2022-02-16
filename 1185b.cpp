#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " " << x << endl;
vector<string> mg(string s) {
    vector<string> v;
    string t;
    t.push_back(s[0]);
    for (int i = 1; i < (int) s.size(); i++) {
        if (s[i] == s[i - 1]) {
            t.push_back(s[i]);
        } else {
            v.push_back(t);
            t.erase();
            t.push_back(s[i]);
        }
    }
    v.push_back(t);
    return v;
}

int main() {
    int n;
    cin >> n;

    string s, t;
    while (n--) {
        cin >> s >> t;
        bool fl = true;
        vector<string> vs = mg(s);
        vector<string> vt = mg(t);
        if (vs.size() != vt.size()) {
            fl = false;
        } else {
            for (int i = 0; i < (int) vs.size(); i++) {
                if (vs[i].size() > vt[i].size() || vs[i][0] != vt[i][0]) {
                    fl = false;
                    break;
                }
            }
        }
        cout << (fl ? "YES" : "NO") << endl;
    }
}
