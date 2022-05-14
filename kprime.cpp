#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

const int N = 1e5 + 7;

vector<bool> pr(N, true);
int pf[N];
int pc[N][6] = {0};
int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    for (int i = 2; i < N; i++) {
        if (pr[i]) {
            pf[i]++;
            for (int j = 2 * i; j < N; j += i) {
                pr[j] = false;
                pf[j]++;
            }
        }
    }

    for (int i = 2; i < N; i++) {
        for (int j = 1; j <= 5; j++) {
            pc[i][j] = pc[i - 1][j];
            if (pf[i] == j)
                pc[i][j]++;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        int ans = pc[b][k];
        if (a > 2)
            ans -= pc[a - 1][k];
        cout << ans << endl;
    }
}
