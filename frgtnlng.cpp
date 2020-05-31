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

    ll t, n, k, l;
    string olkw;
    string nlkw;

    cin >> t;
    while(t--) {
        cin >> n >> k;

        map<string, int> ol;
        string olarr[n];

        rep(i, 0, n) {
            cin >> olkw;

            olarr[i] = olkw;
            ol.insert(pair<string, int>(olkw, 0));
        }

        rep(j, 0, k) {
            cin >> l; 
            
            rep(m, 0, l) {
                cin >> nlkw;

                auto ptr = ol.find(nlkw);
                if (ptr != ol.end())
                    ptr->second += 1;
            }
        }

         rep(o, 0, n) {
            if (ol.at(olarr[o]) > 0)
                cout << "YES";
            else
                cout << "NO";
            cout << " ";
        }

        cout << endl; 
    }
}
