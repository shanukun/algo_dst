#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, t;
    cin >> a >> b;

    long long cnt = 0;
    while (a % b) {
        cnt += a / b;
        t = b;
        b = a % b;
        a = t;
    }
    cout << cnt + (a / b) << endl;
}
