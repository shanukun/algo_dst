#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, a, b, c, d, p, q;
    cin >> n;
    int i = 0;
    for (i = 1; i <= 4; i++) {
        cin >> a >> b >> c >> d;
        p = min(a, b);
        q = min(c, d);
        if (p + q <= n)
            break;
    }
    if (i > 4)
        cout << -1 << endl;
    else
        cout << i << " " << p << " " << n - p << endl;
}
