#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cerr << #x << " " << x << endl
#define ff first
#define ss second

int main() {
    long long t, n, num;
    cin >> t;
    while (t--) {
        cin >> n;
        long long no = 0, ne = 0;
        for (long long i = 0; i < 2 * n; i++) {
            cin >> num;
            if (num & 1) 
                no++;
            else
                ne++;
        }
        if (ne % 2 == 0 && no % 2 == 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}
