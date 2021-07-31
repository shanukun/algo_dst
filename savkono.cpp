#include <bits/stdc++.h>

#define ll long long int
using namespace std;
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while (T--)

int main()
{
    readin;

    ll n, z, c;
    ll count;
    ll top;

    tc {
        cin >> n;
        cin >> z;

        priority_queue<ll> pq;

        for (ll i = 0; i < n; i++) {
            cin >> c;
            pq.push(c);
        }
        
        count = 0;
        while (z > 0 && (top = pq.top()) != 0) {
            z -= top;
            pq.pop();
            pq.push(top / 2);
            ++count;
        }

        if (z > 0)
            cout << "Evacuate" << endl;
        else 
            cout << count << endl;
    }

    return 0;
}
