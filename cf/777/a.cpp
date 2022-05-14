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
        int cnt = 0;
        int p = 1;
        while (cnt < n) {
            s.push_back('0' + p + 1);
            cnt += p + 1;
            p = 1 - p;
        }
        if (cnt != n) {
            for (int i = 0; i < sz(s); i++) {
                if (s[i] == '1')
                    s[i] = '2';
                else 
                    s[i] = '1';
            }
        }

        if (n == 1 || n == 2) 
            s = '0' + n;
        cout << s << endl;
    }
}
