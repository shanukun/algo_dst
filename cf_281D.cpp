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

    ll n;
    ll tp;
    ll fg, sg;
    ll s, ms;
    stack<ll> st;

    cin >> n;

    ll arr[n];

    rep(i, 0, n)
        cin >> arr[i];

    s = 0;
    ms = 0;

    ll j = 0;
    rep(j, 0, n) {
        while(!st.empty()) {
            if (st.top() < arr[j]) {
                ms = max(ms, st.top() ^ arr[j]);
                st.pop();
            }
            else {
                ms = max(ms, st.top() ^ arr[j]);
                break;
            }
        }
        st.push(arr[j]);
    }

    cout << ms;

    return 0;
}
