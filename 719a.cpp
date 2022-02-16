#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    
    n--;
    if (ar[n] == 0) {
        cout << "UP";
    } else if (ar[n] == 15) {
        cout << "DOWN";
    } else if (n > 0) {
        if (ar[n - 1] < ar[n])
            cout << "UP";
        else
            cout << "DOWN";
    } else {
        cout << -1;
    }
}
