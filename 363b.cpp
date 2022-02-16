#include <bits/stdc++.h>
using namespace std;
const long long N = 1e7;
const long long inf = 1e9;
long long pf[N] = {0};

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> pf[i];
        pf[i] += pf[i - 1];
    }

    long long ind;
    long long mins = inf;
    for (int i = k; i <= n; i++) {
        long long hd = pf[i] - pf[i - k];
        if (mins > hd) {
            mins = hd;
            ind = i;
        }
    }
    cout << ind - k + 1;
}
