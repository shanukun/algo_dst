#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<pair<int, int>> pq;
        map<int, int> v;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            v[num]++;
        }
        for (auto x : v)
            pq.push({x.ss, x.ff});

        int sz = n;
        while (pq.size() >= 2) {
            auto x = pq.top();
            pq.pop();
            auto y = pq.top();
            pq.pop();
            x.ff -= 1;
            y.ff -= 1;
            sz -= 2;
            if (x.ff)
                pq.push(x);
            if (y.ff)
                pq.push(y);
        }
        cout << sz << endl;
    }
}
