#include<bits/stdc++.h>
#include<map>
#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

map<vector<ll>, ll> hm;

ll solve(vector<vector<ll>>& vvi, vector<ll>& stcop, ll cp, vector<ll>& cs) {
    if (cp == stcop.size())
        rep(i, 0, cs.size()) {
            if (cs[i] > 0) return 0;
            return 1;
        }
    ll flag = 0;
    rep(k, 0, vvi.size()) {
        if (cs[k] > -1 && vvi[k][cs[k]] == stcop[cp]) {
            cs[k] = cs[k] - 1;
            if (hm.find(cs) != hm.end()) flag = hm.at(cs);
            else {
                flag = solve(vvi, stcop, cp + 1, cs);
                hm.insert(make_pair(cs, flag));
            }
            cs[k] = cs[k] + 1;
        }
        if (flag == 1) return 1;
    }
    return 0;
}

int main() {
    fastio;
    ll a; ll nt; ll nit; ll tn; ll count_;

    tc {
        hm.clear();
        vector<vector<ll>> vvi; vector<ll> state;
        count_ = 0; cin >> nt;
        rep(i, 0, nt) {
            vector<ll> vi; cin >> nit; count_ += nit; 
            state.push_back(nit - 1);
            while(nit--) { cin >> tn; vi.push_back(tn); }
            vvi.push_back(vi);
        }
        vector<ll> stcop;
        rep(i, 0, count_) {
            ll a; cin >> a;
            stcop.push_back(a);
        }
        ll flag = solve(vvi, stcop, 0, state);
        if (flag == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

