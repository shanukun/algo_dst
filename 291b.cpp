#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    string s;
    getline(cin, s);

    bool op = false;
    bool fc = false;
    string ans = "<";
    vector<string> v;
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] == ' ') {
            if (op) {
                ans.push_back(s[i]);
                continue;
            }
            if (fc) {
                ans.push_back('>');
                v.push_back(ans);
                ans = "<";
                fc = false;
            }
        } else if (s[i] == '"') {
            if (op) {
                ans.push_back('>');
                v.push_back(ans);
                ans = "<";
                op = false;
                fc = false;
            } else {
                op = true;
            }
        } else {
            ans.push_back(s[i]);
            fc = true;
        }
     }
    if (ans != "<") {
        ans.push_back('>');
        v.push_back(ans);
    }

    for (string x: v) 
        cout << x << endl;
}
