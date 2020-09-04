#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

void foo(ll n1, ll n2, ll mxsm) {
    if (n1 <= mxsm)
        cout << n2 - n1 << endl;
    else 
        cout << n1 + n2 -  mxsm << endl;
}

int main() {
    fastio;

    ll n1, n2, m, mxsm;
    tc {
        cin >> n1 >> n2 >> m;
        mxsm = m * (m + 1);
        if (n1 <= n2)
            foo(n1, n2, mxsm);
        else 
            foo(n2, n1, mxsm);
    }
    return 0;
}

