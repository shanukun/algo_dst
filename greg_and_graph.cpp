#include <bits/stdc++.h>
using namespace std;
const int RC = 501;
long long gr[RC][RC];

int main() {

    int n;
    cin >> n;

    vector<int> rn(n);
    stack<long long> ans;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> gr[i][j];

    for (int i = 0; i < n; i++)
        cin >> rn[i];
    reverse(rn.begin(), rn.end());

    for (int k = 0; k < n; k++) {
        int nd = rn[k];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                gr[i][j] = min(gr[i][j], gr[i][nd] + gr[nd][j]);

        long long sum = 0;
        for (int m = 0; m <= k; m++)
            for (int n = 0; n <= k; n++)
                sum += gr[rn[m]][rn[n]];
        ans.push(sum);
    }

    while (!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
}
