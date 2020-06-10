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

    ll i = 0;
    ll fl = 1;
    string s;
    string sbs;
    map<string, ll> mp;
    mp.insert(pair<string, ll>("+-", 0));
    mp.insert(pair<string, ll>("-+", 0));
    mp.insert(pair<string, ll>("++", 0));
    mp.insert(pair<string, ll>("--", 0));

    cin >> s;

    if (s.size() % 2 == 0) {
       while(i < s.size()) { 
            sbs = s.substr(i, 2);
            mp[sbs]++;
            i += 2;
        }
    }
    else 
        fl = 0;

    if (fl == 0) 
        cout << "No";
    else if (mp.at("+-") != mp.at("-+"))
        cout << "No";
    else 
        cout << "Yes";

    return 0;
}
