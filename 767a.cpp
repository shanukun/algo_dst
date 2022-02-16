#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pt, num;
    cin >> n;
    pt = n;
    vector<bool> v(n + 1, false);

    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num] = true;
        while (v[pt]) {
            cout << pt << " ";
            pt--;
        }
        cout << endl;
    }
}
