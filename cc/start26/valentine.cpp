#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x < y) {
            cout << 0;
        } else {
            cout << x / y;
        }
        cout << endl;
    }

}
