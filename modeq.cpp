#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

const int M = 5e5 + 7;
vector<int> divs[M];

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    for (int i = 1; i < M; i++) 
        for (int j = i; j < M; j += i)
            divs[j].push_back(i);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        for (int i = 2; i <= n; i++) {
            int x = m - (m % i);
            if (x > 0)
                cnt += lower_bound(all(divs[x]), i) - divs[x].begin();
            else
                cnt += i - 1;
        }
        cout << cnt << endl;
    }
}
