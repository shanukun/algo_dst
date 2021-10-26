#include <bits/stdc++.h>
using namespace std;
#define ll long long int

signed main() 
{
    int t, k, q, qi;

    cin >> t;
    while (t--) {
        cin >> k >> q;
        vector<ll> a(k);
        vector<ll> b(k);

        const int max = 10007;
        vector<ll> tot;
        
        for (int i = 0; i < k; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll high = a[k - 1] + b[k - 1];
        ll low = 0;
        while (low < high) {
            ll mid = low + (high - low) / 2;
            ll count = 0;
            for (int i = 0, j = k - 1; i < k; i++) {
                while (j >= 0 && a[i] + b[j] > mid) 
                    --j;

                count += j + 1;
            }
            if (count > max)
                high = mid - 1;
            else           
                low = mid + 1;
        }
        ll limit = low;
        for (int i = 0, j = k - 1; i < k; i++) {
            while (j >= 0 && a[i] + b[j] > limit)
                --j;
            for (int m = 0; m <= j; m++)
                tot.push_back(a[i] + b[m]);
        }
        sort(tot.begin(), tot.end());
        while (q--) {
            cin >> qi;
            cout << tot[qi - 1] << endl;
        }
    }
}
