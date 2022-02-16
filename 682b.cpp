#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long> v(n + 1, 0);
    for (int i = 1; i <= n; ++i) 
        cin >> v[i];
    sort(v.begin(), v.end());

    for (int i = 1; i <= n; ++i) {
        if (v[i] - v[i - 1] > 1)
            v[i] = v[i - 1] + 1;
    }
    cout << v[n] + 1 << endl;
}
