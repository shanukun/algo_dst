#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans;
    for (int i = 0; i < int(s.size()); i++) {
        int d = s[i] - '0';
        if (d == 9 && i == 0) {
            ans += to_string(d);
            continue;
        }
        d = min(d, 9 - d);
        ans += to_string(d);
    }
    cout << ans << endl;
}
