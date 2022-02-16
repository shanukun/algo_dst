#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int cnt = 0;
    int sa = a[0], sb = b[0];
    int i, j;
    for (i = 0, j = 0; i < n || j < m;) {
        if (sa < sb) {
            sa += a[++i];
        } else if (sa > sb) {
            sb += b[++j];
        } else {
            sa = a[++i]; 
            sb = b[++j];
            cnt++;
        }
    }
    cout << cnt;

}
