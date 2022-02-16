#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long t;
        cin >> t;
        ans += t - 1;
        if (ans & 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}
