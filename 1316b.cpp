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

        int k = 1;
        string sm = s;

        for (int i = 0; i < n; i++) {
            string p = "";
            for (int j = i; j < n; j++)
                p.push_back(s[j]);
            if (n % 2 == (i) % 2) {
                for (int j = 0; j < i; j++)
                    p.push_back(s[j]);
            } else {
                for (int j = i - 1; j >= 0; j--)
                    p.push_back(s[j]);
            }

            if (p < sm) {
                sm = p;
                k = i + 1;
            }
        }
        cout << sm << endl;
        cout << k << endl;
    }
}
