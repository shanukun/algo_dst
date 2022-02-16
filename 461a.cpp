#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long score = 0;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++) {
        score += v[i] * (i + 2);
    }
    cout << score + v[n - 1] * n << endl;
}
