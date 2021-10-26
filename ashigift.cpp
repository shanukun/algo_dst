#include <bits/stdc++.h>

using namespace std;
#define ll long long int

struct clan {
    ll p;
    ll q;
    ll r;
};

struct dish {
    ll x;
    ll y;
};

bool comp_clan(clan ci, clan cj) 
{
    return ci.p < cj.p;
}

bool comp_dish(dish di, dish dj) 
{
    return di.x < dj.x;
}

signed main() 
{
    ll t;
    ll X;
    ll b;
    ll c;
    ll tot;

    cin >> t;
    while (t--) {
        cin >> X;
        tot = 0;

        cin >> b;
        vector<dish> dv(b);
        for (ll i = 0; i < b; i++) {        
            cin >> dv[i].x >> dv[i].y;
            tot += dv[i].y;
        }
        sort(dv.begin(), dv.end(), comp_dish);

        cin >> c;
        ll ans = tot + 1;

        if (c > 0) {
            vector<clan> cv(c);
            for (ll i = 0; i < c; i++) {
                cin >> cv[i].p >> cv[i].q >> cv[i].r;
            }
            sort(cv.begin(), cv.end(), comp_clan);
            
            ll high = tot;
            ll low = 0;


            ll m, n;
            ll dv_len = dv.size();
            ll cv_len = cv.size();
            while (low <= high) {
                ll mid = low + (high - low) / 2;
                ll tot_m = mid;
                m = n = 0;

                while (m < dv_len && n < cv_len) {
                    if (dv[m].x < cv[n].p) {
                        tot_m -= dv[m].y;
                        m++;
                    } else {
                        if (cv[n].q <= tot_m)
                            tot_m += cv[n].r;
                        n++;
                    } 
                }
                while (m < dv_len) {
                    tot_m -= dv[m].y;
                    m++;
                }
                if (tot_m > 0) {
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        cout << ans << endl;
    }
}
