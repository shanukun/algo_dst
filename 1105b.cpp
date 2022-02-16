#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int al[26] = {0};
    for (int i = 0; i < 26; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i == s[j] - 'a')
                cnt++;
            else
                cnt = 0;

            if (cnt == k) {
                al[i]++;
                cnt = 0;
            }
        }
    }

    int mx = 0;
    for (int i = 0; i < 26; i++)
        mx = max(mx, al[i]);
    cout << mx;
}
