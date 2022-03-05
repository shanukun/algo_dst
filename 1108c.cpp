#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second


int32_t main() {
    int n;
    cin >> n;
    string t;
    cin >> t;

    string astr;
    int ans = INT_MAX;
    vector<string> pat{"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
    for (string x : pat) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (t[i] != x[i % 3]) {
                cnt++;
            }
        }
        if (ans > cnt) {
            ans = cnt;
            astr = x;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
        cout << astr[i % 3];
    cout << endl;


}
