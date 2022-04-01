#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    unordered_set<int> s;
    while (n--) {
        int a;
        cin >> a;
        s.insert(a);
    }
    int ans = s.size();
    cout << 2 << endl;
    cout << ans << endl;
}
