#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 1e6 + 3;
const int mod = 1e9 + 7;
int be(int a, int b) {
    int ans = 1;
    while (b > 0) {
        if (b & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

int32_t main() {
    string s;
    cin >> s;
    int n = s.size();

    int acnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'b' && acnt == 0) continue;
        if (s[i] == 'a') acnt++;
        if (s[i] == 'b') {
            ans += be(2, acnt) - 1 ;
        }
    }
        
    cout << ans % mod << endl;
}
