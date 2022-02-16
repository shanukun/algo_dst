#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t, p;
    cin >> s;
    cin >> t;

    int cnt = 0;
    int acnt = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != t[i])
            cnt++;

    if (cnt & 1) {
        cout << "impossible";
    } else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == t[i]) {
                p.push_back(s[i]);
            } else {
                if (acnt < cnt / 2) 
                    p.push_back(s[i]);
                else 
                    p.push_back(t[i]);
                acnt++;
            }
        }
        cout << p;
    }
}
