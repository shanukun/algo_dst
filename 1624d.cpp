#include <bits/stdc++.h>
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++) 
            mp[s[i]]++;
        int np = 0;
        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            np += it->ss / 2;
        }
        int ans = 2 * (np / k);
        n -= ans * k;
        if (n >= k)
            ans++;
        cout << ans << endl;
    }
}
