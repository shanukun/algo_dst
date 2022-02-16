#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long en = 0, m = 0;
    int h[n + 1] = {0};

    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        int absv = abs(h[i] - h[i - 1]);
        if (h[i - 1] - h[i] < 0) {
            if (en < absv) {
                m += absv - en;
                en = 0;
            } else {
                en -= absv;
            }
        } else {
            en += absv;
        }
    }
    cout << m;
}
