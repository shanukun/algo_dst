#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

ll find_sq(ll n) {
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 0;
    }
    else if (n == 3) {
        return 0;
    }
    else {
        if (n % 2 == 0) {
            return ((n - 2) + find_sq(n - 2));
        }
        else {
            return ((n - 3) + find_sq(n - 3));
        }
    }

}


int main() {
    fastio;

    ll b;

    tc {
        cin >> b;
        cout << find_sq(b) / 2 << endl;
    }
    return 0;
}
