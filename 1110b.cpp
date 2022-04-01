#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
 
int32_t main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
 
    vector<int> vec;
    for (int i = 1; i < n; i++) 
        vec.push_back(v[i] - v[i - 1] - 1);
 
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    int ans = v[n - 1] - v[0] + 1;
    for (int i = 0; i < k - 1; i++) {
        ans -= vec[i];
    }
    cout << ans << endl;
}
