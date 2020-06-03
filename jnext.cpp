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

    ll n, ld;

    tc {
        cin >> n;
        ll arr[n];

        rep(i, 0, n) {
            cin >> arr[i];
        }
        bool posbl = next_permutation(arr, arr + n);
        
        if (posbl == false) 
            cout << -1;
        else
            rep(k, 0, n)
                cout << arr[k];

        cout << endl;
    }

    return 0;
}
