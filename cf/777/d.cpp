#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define endl '\n'

const int N = 1e5;
int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, d;
        cin >> x >> d;
        unordered_set<int> gd;
        for (int i = d; i < N; i += d) 
            gd.insert(i);
        unordered_set<int> bt;
        vector<int> vt;
        for (int num : gd) {
            if (num <= x && gd.find(num / d) == gd.end()) {
                bt.insert(num);
                vt.push_back(num);
            }
        }
        bt.insert(d);
        vt.push_back(d);

        int cnt = 0;
        for (int num : vt) {
            if (num <= x && x % num == 0) {
                int div = x / num;
                if (bt.find(div) != bt.end()) {
                    bt.erase(num);
                    cnt++;
                }
            }
        }
        cout << (cnt > 1 ? "YES" : "NO") << endl;
    }
}
