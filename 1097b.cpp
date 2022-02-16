#include <bits/stdc++.h>
using namespace std;

int pow(int b) {
    int res = 1;
    int a = 2;
    while (b) {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool fl = false;
    for (int i = 0; i < pow(2, n); i++) {
        int num = i;
        int lock = 0;

        for (int j = 0; j < n; j++) {
            if (num & 1)
                lock += v[j];
            else 
                lock -= v[j];
            num >>= 1;
        }
        if (lock % 360 == 0) {
            fl = true;
            break;
        }
    }

    cout << (fl ? "YES" : "NO") << endl;

}
