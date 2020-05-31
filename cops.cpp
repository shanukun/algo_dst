#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

int main() {
    fastio;

    ll m, x, y;
    ll th, hn;
    ll fh, bh;
    ll countr;

    tc {
        ll arr[101] = {0};
        cin >> m >> x >> y;

        th = x * y;

        rep(i, 0, m) {
            cin >> hn;
            fh = hn + th;
            bh = hn - th;

            if (fh > 100)
                fh = 100;
            if (bh < 1)
                bh = 1;
            repe(j, bh, fh) {
                arr[j] = 1;
            }
        }

        countr = 0;
        rep(k, 1, 101) {
            if (arr[k] == 0)
                countr++;
        }

        cout << countr << endl;
    }
}
