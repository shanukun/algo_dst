#include <bits/stdc++.h>
using namespace std;

long long be(long long a, int b) {
    long long ans = 1;
    while (b) {
        if (b & 1)
            ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

int main() {
    long long n, k, cc, res = 0;
    cin >> n >> k;

    int tw = 0;
    while (true) {
        cc = be(2, tw);
        if (cc == k) {
            res = tw + 1;
            break;
        } else if (cc > k) {
            k -= cc / 2;
            tw = 0;
        } else {
            tw++;
        }
    }
    cout << res << endl;
}
