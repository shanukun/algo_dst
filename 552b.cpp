#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;

    long long i, cnt = 0, nd = 1;
    for (i = 10; i <= n; i *= 10)
        cnt += nd++ * (i - i / 10);
    n = n - (i / 10 - 1);
    cnt += n * nd;
    cout << cnt << endl;

}
