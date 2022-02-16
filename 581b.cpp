#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long mx = -1;
    vector<long long> h(n);
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] > mx) {
            mx = v[i];
            h.push_back(0);
        } else {
            h[i] = mx - v[i] + 1;
        }
    }

    for (int i = 0; i < n; i++)
        cout << h[i] << " ";
}
