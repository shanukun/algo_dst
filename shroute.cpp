#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define endl '\n'
const int inf = -1;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
       int n, m;
       cin >> n >> m;

       int v[n + 1];
       for (int i = 1; i <= n; i++)
           cin >> v[i];

       int ans[n + 2];
       int sans[n + 2];
       memset(ans, inf, sizeof(ans));
       memset(sans, inf, sizeof(sans));
       for (int i = 1; i <= n; i++) {
           int id = n - i + 1;
           if (v[i] == 1) {
               ans[i] = 0;
           } else {
               if (ans[i - 1] != inf)
                   ans[i] = ans[i - 1] + 1;
           } 

           if (v[id] == 2) {
               sans[id] = 0;
           } else {
               if (sans[id + 1] != inf)
                   sans[id] = sans[id + 1] + 1;
           }
       }
       ans[1] = sans[1] = 0;

       while (m--) {
           int stn;
           cin >> stn;
           int res = min(ans[stn], sans[stn]);
           if (ans[stn] < 0 || sans[stn] < 0)
               res = max(ans[stn], sans[stn]);
           cout<< res << " ";
       }
       cout << endl;
    }
}
