#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second


int32_t main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int ab = a + b;
    int ac = a + c;
    int bd = b + d;
    int cd = c + d;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        vector<int> va{ab, ac, bd, cd};
        vector<int> vb{ab, ac, bd, cd};
        for (int j = 0; j < (int) va.size(); j++) 
            va[j] += i + 1;
        for (int j = 0; j < (int) vb.size(); j++) 
            vb[j] += i + n;

        int mn_max = *min_element(vb.begin(), vb.end()); 
        int mx_min = *max_element(va.begin(), va.end());
        int aa = mx_min - (ab + i);
        int bb = mn_max - (ab + i);
        if (bb >= aa)
            ans += bb - aa + 1;
    }
    cout << ans << endl;
}
