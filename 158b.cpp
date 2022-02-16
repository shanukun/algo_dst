#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num;
    cin >> n;

    int ca[5] = {0};

    for (int i = 0; i < n; i++) {
        cin >> num; 
        ca[num]++;
    }
    int cnt = ca[4];
    if (ca[1] > 0 && ca[3] > 0) {
        if (ca[3] >= ca[1]) {
            cnt += ca[1];
            ca[3] -= ca[1];
            ca[1] = 0;
        } else {
            cnt += ca[3];
            ca[1] -= ca[3];
            ca[3] = 0;
        }
    }
    cnt += ca[3];
    if (ca[2] > 1) {
        cnt += ca[2] / 2;
        if (ca[2] % 2 == 0)
            ca[2] = 0;
        else
            ca[2] = 1;
    }
    if (ca[1] > 0 && ca[2] > 0) {
        cnt += 1;
        if (ca[1] <= 2) {
            ca[1] = ca[2] = 0;
        } else {
            ca[1] -= 2;
            ca[2] = 0;
        }
    }
    if (ca[1] > 0) {
        cnt += ca[1] / 4 + (ca[1] % 4 != 0 ? 1 : 0);
        ca[1] = 0;
    }
    cnt += ca[2];
    cout << cnt << endl;
}
