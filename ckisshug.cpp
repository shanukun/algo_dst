#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)
#define MOD 1000000007

ll fast_exp(ll base, ll expr) {
    ll res = 1;
    while(expr > 0) {
        if(expr % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        expr /= 2;
    }
    return res % MOD;
}

int main() {
    fastio;

    ll n;
    ll expr;
    ll sol;

    tc {
        cin >> n;

        if (n % 2 == 0) {
            expr = fast_exp(2, n / 2);
            sol = (3 * expr - 2) % MOD;
        }
        else {
            expr = fast_exp(2, (n + 1) / 2);
            sol = (2 * expr - 2) % MOD;
        }
        cout << sol << endl;
    }

    return 0;
}
