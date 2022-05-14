#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int pre[n];
        int suf[n];
        pre[0] = suf[n - 1] = 0;
        int csc = 0;
        if (s[0] == '*')
            csc = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == '*') {
                csc++;
                pre[i] = pre[i - 1];
            } else {
                pre[i] = pre[i - 1] + csc;
            }
        }
        csc = 0;
        if (s[n - 1] == '*')
            csc = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (s[i] == '*') {
                csc++;
                suf[i] = suf[i + 1];
            } else {
                suf[i] = suf[i + 1] + csc;
            }
        }
        int ans = LONG_LONG_MAX;
        for (int i = 0; i < n - 1; i++)
            ans = min(ans, pre[i] + suf[i + 1]);
        ans = min(ans, pre[n - 1]);
        ans = min(ans, suf[0]);

        cout << ans << endl;
    }
}
