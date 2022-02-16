#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int pf[N] = {0};

int main() {
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            pf[i + 1] = 1;
        }
        pf[i + 1] += pf[i];
    }

    int m, l, r;
    cin >> m;
    while (m--) {
        cin >> l >> r;
        cout << pf[r] - pf[l] << endl;
    }
}
