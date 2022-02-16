#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b) {
    int ans = 1;
    while (b--) 
        ans *= a;
    return ans;
}

int main() {
    string s;
    cin >> s;

    int n;
    int lst = s.size() - 1;
    n = (s[lst] - '0') % 4;

    int ans = 0;
    for (int i = 1; i <= 4; i++) {
        ans += pow(i, n) % 5;
    }
    cout << ans % 5 << endl;
}
