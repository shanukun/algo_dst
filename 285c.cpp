#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> v[i];
    sort(v.begin() + 1, v.end());
    int mc = 0;
    for (int i = 1; i <= n; i++) {
        mc += abs(i - v[i]);
    }
    cout << mc << endl;
}
