#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int num, sum = 0;
    int cnt = 1;
    int pfd = 10;
    for (int i = 0; cnt <= k; i++) {
        pfd += 9;
        num = pfd;
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum == 10) cnt++;
    }
    cout << pfd;
}
