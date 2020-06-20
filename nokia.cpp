#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

ll find_min(ll n) {
    if (n == 1) {
        return 2;
    }
    else if (n == 2) {
        return 5;
    }
    else {
        if (n % 2 == 0) {
            return n + 1 + (find_min(n / 2) + find_min(n / 2 - 1));
        }
        return n + 1 + (2 * find_min(n / 2));
    }

}

ll find_max(ll n) {
    if (n == 2) {
        return 2;
    }
    return n + find_max(n - 1);
}

int main() {
    fastio;

    ll n, m;
    ll mx, mn;

    tc {
        cin >> n >> m;
        mx = find_max(n + 1);
        mn = find_min(n);

        if (m < mn)
            cout << -1 << endl;
        else if (m > mx) 
            cout << m - mx << endl;
        else 
            cout << 0 << endl;

    }
    return 0;
}
