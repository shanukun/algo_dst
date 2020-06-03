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

    ll n, x, tr;
    ll fl;
    ll elem;

    while(1) {
        cin >> n;
        if (n == 0)
            break;

        queue<int> qu;
        stack<int> st;

        rep(i, 0, n) {
            cin >> x;

            qu.push(x);
        }

        fl = 1;
        tr = 1;

        while(!qu.empty()) {
            elem = qu.front();

            if (elem == tr) {
                qu.pop();
                tr++;
            }
            else {
                if (!st.empty()) {
                    if (st.top() == tr) {
                        st.pop();
                        tr++;
                    }
                    else if (st.top() > elem) {
                        st.push(elem);
                        qu.pop();
                    }
                    else {
                        fl = 0;
                        break;
                    }
                }
                else {
                    st.push(elem);
                    qu.pop();
                }
            }
        }

        if (fl == 1) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
