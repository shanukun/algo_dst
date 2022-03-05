#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    int v[n + 1] = {0};
    int cnt = 1;
    for (int i = 2; i <= n; i++) {
        if (v[i] == 0) {
            for (int j = i; j <= n; j += i)
                v[j] = cnt;
            cnt++;
        }
    }
    for (int i = 2; i <= n; i++) 
        cout << v[i] << " ";
    cout << endl;

}
