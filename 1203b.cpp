#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
#define debug(x) cerr << #x << " " << x << endl

int main() {
    int q, n, num;
    cin >> q;

    while (q--) {
        cin >> n;

        int pr[N] = {0};
        vector<int> v;
        for (int i = 0; i < 4 * n; i++) {
            cin >> num;
            if (pr[num] == 0)
                v.push_back(num);
            pr[num]++;
        }

        sort(v.begin(), v.end());

        int area = -1;
        bool fl = true;
        int i = 0, j = v.size() - 1;
        while (i <= j) {
            if (pr[v[i]] & 1 || pr[v[j]] & 1) {
                fl = false;
                break;
            }
            if (pr[v[i]] != pr[v[j]]) {
                fl = false;
                break;
            }

            if (area == -1) {
                area = v[i] * v[j];
            } else if (area != v[i] * v[j]) {
                fl = false;
                break;
            }

            pr[v[i++]] = pr[v[j--]] = 0;
        }
        cout << (fl ? "YES" : "NO") << endl;
    }

}
