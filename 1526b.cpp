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
        bool fl = false;
        if (n > 1099)
            fl = true;
        for (int i = 0; i < 11 && fl == false; i++) {
            int rem = n - i * 111;
            if (rem >= 0 && rem % 11 == 0)
                fl = true;
        }
        cout << (fl ? "YES" : "NO") << endl;
    }
}
