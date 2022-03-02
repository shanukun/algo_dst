#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 1e6 + 3;

int ar[N];
int le[N];
int ri[N];
int32_t main() {
    int n, num;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> num;
        ar[num]++;
        if (le[num] == 0) {
            le[num] = i;
            ri[num] = i;
        } else {
            ri[num] = i;
        }
    }

    int mx = -1;
    int p = 0, q = 0;
    int len = N;
    for (int i = 1; i < N; i++) {
        if (mx < ar[i]) {
            mx = ar[i];
            len = ri[i] - le[i] + 1;
            p = le[i];
            q = ri[i];
        } else if (mx == ar[i]) {
            if (len > ri[i] - le[i] + 1) {
                len = ri[i] - le[i] + 1;
                p = le[i];
                q = ri[i];
            }
        }
    }
    cout << p << " " << q << endl;
    
}
