#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    string s;
    int cnt = 0;
    vector<int> div{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 39, 41, 43, 47};
    int p;
    for (int i = 0; i < (int) div.size(); i++) {
        cout << div[i] << endl;
        fflush(stdout);
        cin >> s;
        if (s == "yes") {
            cnt++;
            p = div[i];
        }
    }
    if (cnt > 1) {
        cout << "composite" << endl;
    } else if (cnt < 1) {
        cout << "prime" << endl;
    } else {
        bool fl = false;
        p *= p;
        if (p <= 100) {
            cout << p << endl;
            cin >> s;
            if (s == "yes") {
                fl = true;
            }
        }
        if (fl) 
            cout << "composite" << endl;
        else
            cout << "prime" << endl;
    }
    fflush(stdout);
}
