#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

int main() {
    fastio;
    ll n, k, tt, lft, ans;
    ll fs, bs;
    tc {
        tt = fs = bs = 0;
        cin >> n;
        cin >> k;
        ll iw[n];
        rep(i, 0, n) {
            cin >> iw[i];
            tt += iw[i];
        }
        sort(iw, iw + n);
        rep(j, 0, k) 
            fs += iw[j];
        rep(l, n - k, n) 
            bs += iw[l];
        fs = fs > tt - fs ? tt - fs : fs;
        bs = bs > tt - bs ? tt - bs : bs;
        ans = fs > bs ? bs : fs;
        ans = tt - 2 * ans;
        cout << ans << endl;
    }
    return 0;
}

