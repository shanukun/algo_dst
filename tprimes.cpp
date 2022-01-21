#include <bits/stdc++.h>

using namespace std;
#define ll long long int

const ll N = 1e7 + 10;
vector<bool> prim(N, true);

int main()
{
    int n;
    cin >> n;
    prim[0] = prim[1] = false;

    for (ll i = 2; i <= N; ++i) {
        if (prim[i]) {
            for (ll j = 2 * i; j <= N; j += i)
                prim[j] = false;
        }
    }

    ll num;
    while (n--) {
        cin >> num;
        int lo = 1, hi = N, mid;
        while (hi - lo > 1) {
            mid = lo + (hi - lo) / 2;
            ll t = mid * 1LL * mid;
            if (t == num) 
                break;
            else if  (t > num) 
                hi = mid;
            else if (t < num) 
                lo = mid;
        }
        if (mid * 1LL * mid == num)
            if (prim[mid])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else
            cout << "NO" << endl;
        
    }
}
