#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;

    int cnt = 0;
    for (int i = 0; i < (int) s.size(); ++i) {
        int j;
        for (j = 0; j < (int) p.size(); j++) {
            if (s[i + j] != p[j])
                break;
        }
        if (j == (int) p.size()) {
            cnt++;
            s[i + --j] = '#';
            i += j;
        }
    }
    cout << cnt << endl;

}
