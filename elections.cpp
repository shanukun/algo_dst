#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, vot, mcs, ind;
    cin >> n >> m;

    int votes[n + 1] = {0};
    for (int i = 1; i <= m; i++) {
        mcs = 0;
        ind = 1;
        for (int j = 1; j <= n; j++) {
            cin >> vot;
            if (mcs < vot) {
                mcs = vot;
                ind = j;
            }
        }
        votes[ind] += 1;
    }
    ind = 1;
    for (int i = 1; i <= n; i++) {
        if (votes[i] > votes[ind])
            ind = i;
    }
    cout << ind << endl;
}
