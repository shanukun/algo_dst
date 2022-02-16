#include <bits/stdc++.h>
using namespace std;
const int N = 6e3 + 10;

int bad[N];
int main() {
    int n;
    cin >> n;
    int v;
    for (int i = 0 ; i < n; i++) {
        cin >> v;
        bad[v]++;
    }

    long long cost = 0;
    for (int i = 1; i < N; i++) {
        if (bad[i] > 1) {
            cost += bad[i] - 1;
            bad[i + 1] += bad[i] - 1;
        }
    }
    cout << cost << endl;
}
