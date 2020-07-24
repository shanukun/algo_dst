#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

void fibo(ll n, ll m, ll ans[]) {
    if (n == 0) {
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    else {
        fibo(n / 2, m, ans);
        ll a, b, c, d;
        a = ans[0];
        b = ans[1];
        c = 2 * b - a;

        if (c < 0)
            c += m;

        c = (a * c) % m;
        d = (a * a + b * b) % m;

        if (n & 1) {
            ans[0] = d;
            ans[1] = c + d;
        }
        else {
            ans[0] = c;
            ans[1] = d;
        }
    }
}

int main() {
    fastio;

    ll n, m;

    tc {
        cin >> n >> m;
        ll ans[2] = {0};
        fibo(n, m, ans);
        cout << (ans[0] * 2) % m << endl;

    }
    return 0;
}

