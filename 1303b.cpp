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
       int n, g, b;
       cin >> n >> g >> b;
       int ng = (n + 1) / 2;
       int ans = ng / g;
       ans *= (g + b);
       ans = ans + ng % g;
       if (ng % g == 0) 
           ans -= b;
       ans = max(ans, n);
       cout << ans << endl;
    }
}
