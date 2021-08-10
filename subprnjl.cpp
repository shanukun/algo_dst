#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int 
#define readin freopen("input.txt", "r", stdin)

#define trace(x) cout << #x << ":" << x << endl;
#define o_set tree<pair<ll, int>, null_type, less<pair<ll, int>>, rb_tree_tag, tree_order_statistics_node_update>

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    readin;
    ll m;
    ll t, n, k;
    ll bs;

    cin >> t;
    while (t--) {
        cin >> n >> k;

        ll ar[n];
        for (ll i = 0; i < n; i++) 
            cin >> ar[i];

        bs = 0;
        for (ll i = 0; i < n; i++) {
            o_set s;
            ll cnt[2001] = {0};
            for (ll j = i; j < n; j++) {
                m = ceil((double) k / (j - i + 1));
                m = ceil((double) k / m);
                m--;
                s.insert({ar[j], cnt[ar[j]]++});
                auto it = s.find_by_order(m);
                if (cnt[cnt[it->first]] > 0)
                    bs++;
            }
        }
        cout << bs << "\n";
    }
}
