#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;

    int cnt = 0;

    long long ans = 0;
    long long base = 1;
    while (n > 0) {
        int ld = n % 10;
        n /= 10;
        if (ld == 7)
            ans += base;
        base *= 2;
        cnt++;
    }

    base = 2;
    while (cnt > 1) {
        ans += base;
        base *= 2;
        cnt--;
    }

    cout << ans + 1;
}
