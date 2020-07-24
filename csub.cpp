#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

ll calc(ll n) {
    ll count = 0;
    count = (n * (n + 1)) / 2;
    return count;
}

int main() {
    fastio;

    ll n, nc;
    char c;

    tc {
        cin >> n;

        nc = 0;
        rep(i, 0, n) {
            cin >> c;

            if (c == '1')
                nc++;
        }
        ll ss = calc(nc);

        cout << ss << endl;
    }

    return 0;
}
