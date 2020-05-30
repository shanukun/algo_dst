#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fastio

    ll t, n;
    ll op;

    cin >> t;
    while(t--) {
        op = 0;

        cin >> n;

        ll w[n];
        
        rep(i, 0, n)
            cin >> w[i];

        sort(w, w + n);

        rep(j, 1, n)
            op += w[j] - w[0];
        cout << op << endl;
    }
}
