#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

#define pipii pair<int, pair<int, int>>

pipii fmx(pipii a, pipii b, pipii c, int x) {
    a.ff *= x;
    b.ff *= x;
    c.ff *= x;
    pipii ans;
    if (a.ff < a.ff * b.ff) {
        b.ff *= a.ff;
        b.ss.ss = a.ss.ss;
        if (b.ff < a.ff * c.ff) {
            c.ff *= a.ff;
            c.ss.ss = b.ss.ss;
            ans = c;
        } else {
            ans = b;
        }
    } else {
        b = a;
        if (b.ff < a.ff * c.ff) {
            c.ff *= a.ff;
            c.ss.ss = b.ss.ss;
            ans = c;
        } else {
            ans = b;
        }
    }
    ans.ff *= x;
    return ans;

}

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    /* -------------- */

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        pipii mx = {1, {0, n}};
        pipii cx = {1, {0, n}};
        pipii cn = {1, {0, n}};

        auto pr = [&](pipii t){
            cout << t.ff << " ";
            cout << t.ss.ff << " ";
            cout << t.ss.ss << endl;
        };
        for (int i = 1; i <= n; i++) {
            if (v[i] == 0) {
                cx = {1, {0, n}};
                cn = {1, {0, n}};
            }
            pipii tcx = cx;
            pipii cc = {v[i], {i - 1, n - i}};
            cx = fmx(cc, cx, cn, 1);
            cn = fmx(cc, tcx, cn, -1);

            if (mx.ff < cx.ff)
                mx = cx;
            pr(cx);
            pr(cn);
            cout << endl;
        }

        cout << mx.ss.ff << " " << mx.ss.ss << endl;

    }
}
