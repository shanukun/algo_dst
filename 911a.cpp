#include <bits/stdc++.h>
using namespace std;
const long long N = 1e9 + 10;

int main() {
    long long n, num, mine, sume, li;
    cin >> n;

    mine = N;
    sume = N;
    li = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num < mine) {
            mine = num;
            sume = N;
            li = i;
        } else if (num == mine) {
            if (i - li < sume)
                sume = i - li;
            li = i;
        }
    }
    cout << sume;
}
