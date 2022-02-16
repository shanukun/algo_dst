#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool fl = true;
    int k = 0;
    for (int i = 0; i < int(s.size()); i++) {
        int l = s[i] - 'a';
        if (l == k) {
            k++;
        } else if (l > k){
            fl = false;
            break;
        }
    }
    cout << (fl ? "YES" : "NO");
}
