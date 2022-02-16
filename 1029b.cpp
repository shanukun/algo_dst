#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 1;
    for (int i = 0; i < n;) {
        int j = i;
        while (j + 1 < n && v[j + 1] <= 2 * v[j]) {
            j++;
        }
        ans = max(ans, j - i + 1);
        i = j + 1;
    }
    cout << ans << endl;
}
