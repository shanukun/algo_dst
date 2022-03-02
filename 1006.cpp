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

    int i = 0, j = n - 1;
    int sumi = v[i], sumj = v[j];
    int mx = 0;
    while (i < j) {
        if (sumi == sumj) {
            mx = sumi;
            sumi += v[++i];
            sumj += v[--j];
        } else if (sumi < sumj) {
            sumi += v[++i];
        } else {
            sumj += v[--j];
        }
    }
    cout << mx << endl;
}
