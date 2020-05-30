// https://www.codechef.com/problems/CNOTE
#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t; 
    ll x, y, k, n; 
    ll p, c;
    ll lucky;

    cin >> t;
    while(t--) {
        lucky = 0;

        cin >> x >> y >> k >> n;
        
        for(ll i = 0; i < n; i++) {
            cin >> p >> c;
            if (p >= (x - y) && c <= k) {
                lucky = 1;
            }
        }
        if (lucky == 1) cout << "LuckyChef\n";
        else cout << "UnluckyChef\n";
    }
    return 0;
}
