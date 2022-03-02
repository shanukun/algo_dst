#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    vector<int> b = v;
    sort(b.begin(), b.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != b[i])
            cnt++;
    }
    if (cnt > 2)
        cout << "NO\n";
    else
        cout << "YES\n";
    
}
