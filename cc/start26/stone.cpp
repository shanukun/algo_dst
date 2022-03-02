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
        int n; 
        cin >> n;
        string p, q;
        cin >> p >> q;
        sort(p.begin(), p.end());
        sort(q.begin(), q.end());
        string a, b;
        int i = 0, k = 0, j = n - 1;
        while (i < n && j >= 0 && k <= j) {
            if (p[i] <= q[j]) {
                a.push_back(p[i]);
            } else {
                b.push_back(p[i]);
            }
            i++;
            if (i < n) {
                if (p[i] >= q[j]) {
                    b.push_back(q[k]);
                    k++;
                } else {
                    a.push_back(q[j]);
                    j--;
                }
            }
        }
        while (j >= k) {
            a.push_back(q[j]);
            j--;
        }
        reverse(b.begin(), b.end());
        cout << a + b << endl;
    }

}
