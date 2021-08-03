#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define readin freopen("input.txt", "r", stdin);

void remove(set<ll> &stg, ll elem)
{
    if (stg.count(elem))
        stg.erase(stg.find(elem));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    cout.tie(NULL);


    int op;
    ll n, q, i, x;

    cin >> n >> q;

    ll ar[n];
    set<ll> stg;

    for (ll i = 0; i < n; i++) {
        cin >> ar[i];

        if (i == 0 || ar[i] % ar[i - 1] != 0)
            stg.insert(i);
    }
    while (q--) {
        cin >> op;
        
        if (op == 1) {
            cin >> i >> x;
            ar[--i] = x;
            if (i != 0) {
                if (ar[i] % ar[i - 1] == 0)
                    remove(stg, i);
                else 
                    stg.insert(i);
            }
            if (i < n) {
                if (ar[i + 1] % ar[i] == 0)
                    remove(stg, i + 1);
                else 
                    stg.insert(i + 1);
            }
        } else if (op == 2) {
            cin >> i;
            --i;

            auto v = stg.lower_bound(i);
            if (*v == i)
                cout << *v + 1;
            else
                cout << *--v + 1;

            cout << "\n";
        }
    }
}
