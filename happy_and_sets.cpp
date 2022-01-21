#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int prod = 1;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        prod = (1ll * prod * (1 + v[i])) % mod;
    }
    cout << prod - 1 << endl;
}
