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
    ll size, maxs;

    while(true) {
        ll j = 0;
        stack<ll> st;

        maxs = 0;

        cin >> n;
        if (n == 0)
            break;

        ll arr[n];
        rep(i, 0, n)
            cin >> arr[i];

        while(j < n) {
            if (st.empty() || arr[st.top()] <= arr[j]) {
                st.push(j);
                j++;
            }
            else {
                ll tp = st.top();
                st.pop();

                size = arr[tp] * (st.empty() ? j : j - st.top() - 1);

                if (size > maxs)
                    maxs = size;
            }
        }

        while(!st.empty()) {
            ll tp = st.top();
            st.pop();

            size = arr[tp] * (st.empty() ? j : j - st.top() - 1);

            if (size > maxs)
                maxs = size;
        }

        cout << maxs << endl;
    }

    return 0;
}
