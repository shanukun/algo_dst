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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;
        vector<string> sv{"00", "010"};
        for (int i = 0; i < n; i++) {
            string t; 
            if (s[i] == '1') continue;
            for (int j = i; j < n; j++) {
                t.push_back(s[j]);
                if (t == sv[0])
                    ans += 2;
                if (t == sv[1])
                    ans++;
                if (sz(t) > 3)
                    break;
            }
        }
        cout << ans << endl;
    }
}
