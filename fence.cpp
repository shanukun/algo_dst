#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define MOD 1e9+7
#define readin freopen("input.txt", "r", stdin)

int main()
{
    readin;
    ll r, c, np;
    ll x, y;
    ll count;

    ll t;
    cin >> t;
    while (t--) {
        cin >> r >> c >> np;

        count = 0;
        set<pair<ll, ll>> s;
        while (np--) {
            cin >> x >> y;
            s.insert({x, y});
        }

        for (auto v: s) {
            ll x = v.first;
            ll y = v.second;

            if (s.find({x - 1, y}) == s.end())
                ++count;
            if (s.find({x + 1, y}) == s.end())
                ++count;
            if (s.find({x, y - 1}) == s.end())
                ++count;
            if (s.find({x, y + 1}) == s.end())
                ++count;
        }
        cout << count << "\n";
    }
}
