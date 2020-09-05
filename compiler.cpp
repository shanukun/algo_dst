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

    ll count;
    ll maxs;
    ll lpb;
    string expr;

    tc {
        lpb = 0;
        count = 0;
        maxs = 0;
        stack<char> st;

        cin >> expr;

        rep(i, 0, expr.size()) {
            if (expr[i] == '<') {
                st.push(expr[i]);
                lpb++;
            }
            else if (!st.empty()) {
                st.pop();
                count++;
                if (lpb == count)
                    maxs = count;
            }
            else {
                count = 0;
                break;
            }
        }

        cout << 2 * maxs << endl;
    }

    return 0;
}
