#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool fl = true;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 1; i < n && fl; i++) {
        if ((v[0] & 1) != (v[i] & 1))
            fl = false;
    }
    if (!fl)
        sort(v.begin(), v.end());
    for (int x: v)
        cout << x << " ";
    cout << endl;
}
