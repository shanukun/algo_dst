#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, pl;
    cin >> n >> k;

    string s;
    int l[101] = {0};
    while (n--) {
        cin >> s;
        l[s.size()]++;
    }
    cin >> s;
    pl = s.size();
    for (int i = 1; i <= pl; i++)
        l[i] += l[i - 1];
    cout << l[pl - 1] + (l[pl - 1] / k) * 5 + 1;
    cout << " ";
    l[pl]--;
    cout << l[pl] + (l[pl] / k) * 5 + 1;

}
