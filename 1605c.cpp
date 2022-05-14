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
     
        vector<string> vs{"aa", "aca", "aba", "abca", "acba", "accabba", "abbacca"};
     
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int ans = INT_MAX;
            for (string x : vs) {
                if (s.find(x) != string::npos) {
                    ans = min(ans, sz(x));
                }
            }
            if (ans == INT_MAX)
                ans = -1;
            cout << ans << endl;
        }
    }
