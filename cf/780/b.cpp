#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));

        bool fl = true;
        if (n == 1 && v[0] > 1) {
            fl = false;
        }        

        if (n != 1 && v[n - 1] - v[n - 2] > 1)
            fl = false;

        if (fl)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
