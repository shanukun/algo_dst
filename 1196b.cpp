#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl;

int main() {
    int q, n, k;
    long long num;
    cin >> q;

    while (q--) {
        cin >> n >> k;
        int no = 0;
        vector<long long> ps(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> num;
            if (num & 1) {
                ps[i] = 1;
                no++;
            }
        }
        vector<int> b;
        if (no >= k && (no - k + 1) % 2) {
            cout << "YES" << endl;
            int j = n;
            for (int i = n; i > 0 && k > 0; i--) {
                if (ps[i]) {
                    b.push_back(j);
                    j = i - 1;
                    k--;
                }
            }
            for (int i = b.size() - 1; i >= 0; i--)
                cout << b[i] << " ";
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
