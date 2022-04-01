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
        int a, b;
        cin >> a >> b;
        int ans = a + b * 2 + 1;
        if (a == 0) 
            ans = 1;
        cout << ans << endl;
    }
}
