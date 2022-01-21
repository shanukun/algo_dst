#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool check_ap(int a, int b, int c)
{
    if (c - b == b - a)
        return true;
    return false;
}
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (check_ap(a, b, c))
            cout << "YES" << endl;
        else {
            if ((c - a) % 2 == 0) {
                d = (c - a) / 2;
                if ((a + d) % b == 0 && (a + d) / b >= 1 && check_ap(a, b * ((a + d) / b), c)) {
                    cout << "YES" << endl;
                    continue;
                }
            }
            d = b - a;
            if ((b + d) % c == 0 && (b + d) / c >= 1 && check_ap(a, b, c * ((b + d) / c))) {
                cout << "YES" << endl;
                continue;
            }
            d = c - b;
            if ((b - d) % a == 0 && (b - d) / a >= 1 && check_ap(a * ((b - d) / a), b, c)) {
                cout << "YES" << endl;
                continue;
            }
            cout << "NO" << endl;
        }
    }

}
