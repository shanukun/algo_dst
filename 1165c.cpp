#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int32_t main() {
    int n;
    cin >> n;
    string s, t = "";
    cin >> s;
    int i = 0;
    int j = i + 1;
    int cnt = 0;
    while (i < n && j < n) {
        if (s[i] == s[j]) {
            j++;
            cnt++;
        } else {
            t.push_back(s[i]);
            t.push_back(s[j]);
            i = j + 1;
            j = i + 1;
        }
        if (i < n && j >= n)
            cnt++;
    }
    if (n == 1) cnt = 1;
    cout << cnt << endl;
    cout << t << endl;

}
