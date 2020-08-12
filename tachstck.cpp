#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)

int main() {
    fastio;
    
    ll cs, ld;

    cin >> cs;
    cin >> ld;

    ll tcs[cs];

    rep(i, 0, cs) {
        cin >> tcs[i];
    }

    sort(tcs, tcs + cs);

    ll cnt = 0;
    rep(i, 0, cs) {
        if (tcs[i + 1] - tcs[i] <= ld) {
            cnt++;
            i++;
        }
    }

    cout << cnt;

    return 0;
}

