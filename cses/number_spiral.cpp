#include <bits/stdc++.h>
using namespace std;

long long int square(long long int x) {
    return x * x;
}

int main()
{
    int t;
    long long int x, y, ans;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if (x > y) {
            if (x % 2 == 0)
                ans = square(x) - (y - 1);
            else
                ans = square(x - 1) + y;
        } else {
            if (y % 2 == 0)
                ans = square(y - 1) + x;
            else
                ans = square(y) - (x - 1);
        }
        cout << ans << endl;
    }
}
