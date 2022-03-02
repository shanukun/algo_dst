#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int i = 0, j = 1;
    int cnt = 0;
    while (i < n && j < n) {
        if (v[i] < v[j]) {
            cnt++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    cout << cnt << endl;
}
