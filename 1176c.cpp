#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> g{4, 8, 15, 16, 23, 42};
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    unordered_map<int, int> mp;
    unordered_map<int, int> indmp;
    indmp[4] = -1;
    for (int i = 1; i < 6; i++) 
        indmp[g[i]] = g[i - 1];
    for (int i = 0; i < 6; i++)
        mp[g[i]] = 0;
    for (int i = 0; i < n; i++) {
        if (indmp[v[i]] == -1) {
            mp[v[i]]++;
        } else {
            int ind = indmp[v[i]];
            if (mp[ind] > 0) {
                mp[ind]--;
                mp[v[i]]++;
            }
        }
    }
    cout << n - 6 * mp[42] << endl;

}
