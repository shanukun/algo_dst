#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a = 0, b = 0, num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a += num;
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        b += num;
    }

    cout << a - b << endl;

    for (int i = 0; i < n - 2; i++) {
        cin >> num;
        b -= num;
    }

    cout << b << endl;
}
