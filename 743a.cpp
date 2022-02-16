#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    a--;
    b--;
    string s;
    cin >> s;
    cout << (s[a] == s[b] ? 0 : 1) << endl;
}
