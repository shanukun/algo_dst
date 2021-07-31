#include<bits/stdc++.h>

#define ll long long int
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define MOD 1000000007

int main() 
{
    fastio;
    readin;

    ll n, m;

    ll num;
    ll sml_ind, lrg_ind;
    ll sml = MOD;
    ll lrg = -MOD;

    cin >> n;
    cin >> m;

    for (ll i = 0; i < n; i++) {
        cin >> num;
        if (num < sml) {
            sml = num;
            sml_ind = i;
        }
    }

    for (ll j = 0; j < m; j++) {
        cin >> num;
        if (num > lrg) {
            lrg = num;
            lrg_ind = j;
        }
    }

    for (ll k = 0; k < m; k++)
        cout << sml_ind << " " << k << endl;

    for (ll l = 0; l < n; l++)
        if (l != sml_ind)
            cout << l << " " << lrg_ind << endl;

    return 0;
}

