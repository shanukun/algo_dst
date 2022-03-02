#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    float f[11];
    f[0] = 1;
    for (int i = 1; i <= 10; i++)
        f[i] = i * f[i - 1];

    string s, t;
    cin >> s >> t;

    int sc = 0, tc = 0;
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] == '+')
            sc++;
        else 
            sc--;
    }
    int uc = 0;
    for (int i = 0; i < (int) t.size(); i++) {
        if (t[i] == '+')
            tc++;
        else if (t[i] == '-')
            tc--;
        else
            uc++;
    }
    double ans = 0.0;
    int ex = sc - tc;
    if (uc == 0 && ex == 0) {
        cout << 1.0 << endl;
    } else if (uc == 0 && ex != 0) {
        cout << 0.0 << endl;
    } else if (abs(ex) > uc || abs(ex) % 2 != uc % 2) {
        cout << ans << endl;
    } else {
        ex = abs(ex);
        if (ex == 0) {
            ans = f[uc] / (f[uc / 2] * f[uc / 2]); 
        } else {
            int re = ex + (uc - ex) / 2;
            ans = f[uc] / (f[re] * f[uc - re]); 
        }
        ans = ans / pow(2, uc);
        cout << setprecision(9) << ans << endl;
    }
}
