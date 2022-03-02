#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 1e5 + 3;

int32_t main() {
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    int nw = 0;
    int j = 2;
    for (int i = 0; i < n; i++) {
        while (j < n && v[j] - v[i] <= d)
            j++;
        if (i + 2 <= j) {
            int num = j - i - 1;
            nw += num * (num - 1) / 2;
        }
    }
    cout << nw << endl;
}
