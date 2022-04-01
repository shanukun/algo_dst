#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, num;
    cin >> n;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (ans == -1) 
            ans = num;
        else 
            ans = __gcd(num, ans);
    }
    int cnt = 0;
    for (int i = 1; i * i <= ans; ++i) {
        if (ans % i == 0) {
            cnt++;
            if (ans / i != i)
                cnt++;
        }
    }
    cout << cnt << endl;
}
