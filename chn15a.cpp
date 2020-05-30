#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fastio

    ll t, n, k;
    ll m;
    ll count;

    cin >> t;
    while(t--) {
        count = 0;

        cin >> n >> k;

        rep(i, 0, n) {
            cin >> m;
            if ((m + k) % 7 == 0) {
                count++;
            }
        }

        cout << count << endl;
    }
}




